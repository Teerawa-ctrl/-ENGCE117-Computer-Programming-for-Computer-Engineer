//นายบุญประพัฒน์ ตานัน 65543206066-4 section 1
//https://www.youtube.com/watch?v=aL582myrR9g
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
} ;//declare node


void AddNode(struct Node **protoNode, int data) ;
void ShowData(struct Node *protoNode);
void ShowBack(struct Node **protoNode);


int main(){
	struct Node *start;// main node
	start = NULL;// set up node
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);//output all data in every node
	ShowBack(&start);//output and convert all data in every node by last to first
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

void ShowBack(struct Node **protoNode){
	struct Node *Total = NULL ;
	struct Node *mover = *protoNode ; 
	struct Node *holder = NULL ;
	while (mover != NULL){
		holder = (mover)->next ;
		(mover)->next = Total ;
		Total = (mover) ;
		(mover) = holder ; 
	}//end while
	ShowData(Total) ;
	*protoNode = Total ;
}//end ShowBack

