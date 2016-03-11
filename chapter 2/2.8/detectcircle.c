#include<stdio.h>
#include<malloc.h>

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
void insert(int data){
	struct node *temp = HEAD;
	struct node *newNode;
	newNode = createNode(data);
	if(HEAD==NULL){
		HEAD = newNode;
	}
	else
	{
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = newNode;
		temp = newNode;
	}
}
void makeitcircular(int a,int index){
	struct node *temp = HEAD;
	struct node *circle;
	struct node *indexer;
	int i=0;
	while(temp->next!=NULL){
		if(i==a)
			circle = temp;
		if(i==index)
			indexer = temp;
		temp = temp->next;
		i++;
	}
	indexer->next = circle;
	
}
void print(){
	struct node *temp = HEAD;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
}
struct node *detectCircle(){
	struct node *fast = HEAD;
	struct node *slow = HEAD;
	while(fast->next->next!=NULL && slow->next!=NULL){
		printf("\n slow - %d",slow->data);
		printf("\n fast - %d",fast->data);

		fast = fast->next->next;
		slow = slow->next;
	
		if(fast==slow){
			printf("\n fast -> %d - slow ->%d",fast->data,slow->data);
			printf("\n LOOP detected");
			break;
		}
		else
		{
	
		}

	}
	if(fast == NULL || fast->next == NULL)
		return NULL;

	slow = HEAD;
	while(slow!=fast){
		printf("\n slow - %d",slow->data);
		printf("\n fast - %d",fast->data);
		slow = slow->next;
		fast = fast->next;
	}

	printf("\n ans :%d",slow->data);
}
int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	insert(10);
	insert(11);
	insert(12);
	insert(13);
	insert(14);
	print();
	//forced to make circular - index,index->next to be updated
	makeitcircular(3,12);
	//obviously we made circular loop
	//print();
	detectCircle();
}