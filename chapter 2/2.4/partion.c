#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};

struct node *createNode(int data){
	struct node *newNode;
	newNode = (struct node *)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
struct node *getNode(int number,struct node *HEAD){
	struct node *temp=HEAD;
	while(temp->next!=NULL)
	{
		if(temp->data == number)
			return temp;
		temp=temp->next;
	}
	return NULL;
}
struct node  *partition(struct node *data,struct node *HEAD){

}
void insertAtBegin(int data,struct node *HEAD){
	printf("%dUUUU",&HEAD);
	printf("%d----------->",data);
	struct node *temp = HEAD;
	struct node *newNode = createNode(data);
	if(temp==NULL){
		HEAD = newNode;
	}
	else
	{
		newNode->next = HEAD;
		HEAD = newNode;
	}

}
void insertAtEnd(int data,struct node *HEAD){
	struct node *temp = HEAD;
	struct node *newNode = createNode(data);
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = newNode;
}
void print(struct node *HEAD){
	struct node *temp=HEAD;
	while(temp!=NULL){
		printf("%d=>",temp->data);
		temp=temp->next;
	}
}
int main(){
	struct node *HEAD = NULL;
	printf("%dDDD\n",&HEAD);
	insertAtBegin(0,HEAD);
	insertAtBegin(1,HEAD);
	insertAtBegin(2,HEAD);
	insertAtBegin(3,HEAD);
	insertAtBegin(4,HEAD);
	insertAtBegin(5,HEAD);
	insertAtBegin(6,HEAD);
	print(HEAD);
	insertAtBegin(9,HEAD);
	insertAtEnd(7,HEAD);
	insertAtBegin(0,HEAD);
	insertAtEnd(11,HEAD);
	insertAtEnd(14,HEAD);
	insertAtEnd(199,HEAD);
	insertAtBegin(452,HEAD);
	print(HEAD);
}