#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
}*HEAD=NULL;
/*
1) construct linked list singly 
2) get node reference with given index
3) remove node by copying the next node to our current node - this will relatively delete the node
4) you cant delete last node so just mark it as deleted by HIGH value(representation sake)
*/
struct node *createNode(int data){
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertNode(int data){
	struct node *temp = HEAD;
	struct node *newNode = createNode(data);
	if(HEAD==NULL){
		HEAD = newNode;
	}
	else	
	{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next = newNode;
	}
}
void print(){
	struct node *temp = HEAD;
	while(temp!=NULL){
		printf("=>%d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
struct node *getNode(int index){
	struct node *temp = HEAD;
	while(index-- > 1){
		temp = temp->next;
	}
	return temp;
}
void removeNode(struct node *temp){
	if(temp->next!=NULL){
		temp->data = temp->next->data;
		temp->next = temp->next->next;
	}
	else
	{
		temp->data = 999;
		//you can't delete last node so just mark it with high value mean it is discarded
	}
}
int main(){
	struct node *temps;

	insertNode(1);
	insertNode(2);
	insertNode(3);
	insertNode(4);
	insertNode(5);
	insertNode(6);
	insertNode(7);
	insertNode(8);
	print();
	temps = getNode(3);
	removeNode(temps);
	print();
	temps = getNode(7);
	removeNode(temps);
	print();

}