#include<stdio.h>
#include<malloc.h>
/*
1) define singly linked list with basic operations - print(),insertNode()
2) remove duplicate - two pointer starting from HEAD
3) take a pointer and traverse rest node 
4) if data is equal then link  node->next to node->next->next;
4) this will run and remove duplicates

be at the previous(current working) node and check for next node data only then we could change the link to unique element
or else it's error to traverse back.since it singly linked list.
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
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void print(){
	struct node *temp=HEAD;
	while(temp!=NULL)
	{
		printf("%d =>",temp->data);
		temp =temp->next;
	}
	printf("\n");
}
void removeDuplicate(){
	struct node *temp = HEAD;
	while(temp!=NULL){
		struct node *looper = temp;
		while(looper->next!=NULL){		
			if(temp->data == looper->next->data){
				looper->next = looper->next->next;
			}
			looper = looper->next;
		}
		temp = temp->next; 
	}
}
int main(){

	insertNode(1);
	insertNode(2);
	insertNode(3);
	insertNode(4);
	insertNode(1);
	insertNode(6);
	insertNode(7);
	insertNode(8);
	insertNode(5);
	insertNode(4);
	insertNode(11);
	print();
	removeDuplicate();
	print();
}