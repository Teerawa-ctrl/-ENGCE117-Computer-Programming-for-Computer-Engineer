#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};//declare node

void AddNode(struct Node **protoNode, int data) ;
void ShowData(struct Node *protoNode) ;
void Swap(struct Node **protoNode,int swap1,int swap2);

int main(){
	struct Node *start;// main node
	start = NULL;// set up node
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);//output all data in every node
	Swap(&start,20,30);
	ShowData(start);//output all data in every node
	Swap(&start,40,10);
	ShowData(start);//output all data in every node
}

void AddNode(struct Node **protoNode, int data){
	while(*protoNode != NULL){
		protoNode = &(*protoNode)->next ;
	}//end while

	*protoNode = new struct Node;
	(*protoNode)->data = data ;
	(*protoNode)->next = NULL ;
}//end Addnode

void ShowData(struct Node *protoNode){
	printf("Output : ") ;
	
	while (protoNode != NULL){
		printf("%d ", protoNode->data) ;
		protoNode = protoNode->next ;
	}//end while
	printf(" \n") ;
}//end ShowData


void Swap(struct Node **protoNode,int swap1,int swap2){
	int a = 0 ;
	struct Node *holder = *protoNode ;
	while(holder != NULL){ //
		if(holder->data == swap1){
			a++ ;
		}//end if
		else if(holder->data == swap2){
			a++ ;
		}//end else if
		holder = holder -> next ;
	}//end while
	if ( a!= 2) return;
	while(*protoNode != NULL){
		if((*protoNode)->data == swap1){
			(*protoNode)->data = swap2;
		}//endif
		else if((*protoNode)->data == swap2){
			(*protoNode)->data = swap1;
		}//endelseif
		protoNode = &(*protoNode)->next;
	}//endwhile
}


