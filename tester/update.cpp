#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};//declare node

void AddNode(struct Node **protoNode, int data) ;
void Update(struct Node **protoNode,int data, int Ndata) ;
void ShowData(struct Node *protoNode) ;

int main(){
	struct Node *start; // main node
	start = NULL;// set up node
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);//output all data in every node
	Update(&start,10,99);
	ShowData(start);//output all data in every node
	Update(&start,10,98);
	ShowData(start);//output all data in every node
}
void AddNode(struct Node **protoNode, int data){
	while(*protoNode != NULL){
		protoNode = &(*protoNode)->next;
	}//end while

	*protoNode = new struct Node;
	(*protoNode)->data = data;
	(*protoNode)->next = NULL;
}//end Addnode

void ShowData(struct Node *protoNode){
	printf("Output : ");
	
	while (protoNode != NULL){
		printf("%d ", protoNode->data);
		protoNode = protoNode->next;
	}//end while
	printf(" \n");
}//end ShowData

void Update(struct Node **protoNode,int data,int Ndata){
	while(*protoNode != NULL){
		if((*protoNode)->data == data){
			break;
		}//end if
		protoNode = &(*protoNode)->next;
	}//end while
	if((*protoNode) != NULL){
		(*protoNode)->data = Ndata ;
	}//end if
}//end Update

