#include<stdio.h>
#include<malloc.h>
/*
1) the Program i written is naive one.
2) traverse the complete linkedlist and find the length
3) minus the given k length and update the count
4) traverse from HEAD to (count) times the node 
5) display data

just total length - given length and then traverse from head
*/

struct node{
	int data;
	struct node *next;
}*HEAD=NULL;

struct node *createNode(int data){
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
void insertNode(int data){
	struct node *newNode = createNode(data);
	struct node *temp = HEAD;
	if(HEAD==NULL){
		HEAD = newNode;
	}
	else
	{
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = newNode;
	}
}

void print(){
	struct node *temp = HEAD;
	while(temp!=NULL){
		printf("=>%d",temp->data);
		temp = temp->next;
	}
}

void kLastElement(int k){
	
	/*this is naive method */

	int count = 0,i=0;
	struct node *temp = HEAD;
	struct node *temp2 = HEAD;

	while(temp!=NULL){
		count++;
		temp = temp->next;
	}
	k = count - k;
	while(k--)
		temp2 = temp2->next;
	printf("\n%d\n",temp2->data);
}
int main(){
	insertNode(1);
	insertNode(2);
	insertNode(3);
	insertNode(4);
	insertNode(5);
	insertNode(6);
	insertNode(7);
	insertNode(8);
	print();
	kLastElement(2);
	kLastElement(5);
	kLastElement(1);
	kLastElement(6);
	kLastElement(7);
}