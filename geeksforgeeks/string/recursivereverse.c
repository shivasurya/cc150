#include<stdio.h>
#include<string.h>
/*
first function - i have written :D
we have to maintain the state of integer
not efficient

second function - efficient 
learnt a new thing and char can maintain the state like array - holding simgle value at a time.
*/
void printchar(char *word,int i){
	int length = strlen(word);
	if(i<length-1)
		printchar(word,i+1);
	printf("%c",word[i]);
}
void print(char *word)
{
	if(*word){
		print(word+1);
		printf("%c",*word);
	}
}
int main(){
	char word[100];
	int i=0;
	scanf("%s",word);
	printchar(word,i);
	printf("\n");
	print(word);
	return 0;
}