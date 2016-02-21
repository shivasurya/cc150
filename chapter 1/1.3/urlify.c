#include<stdio.h>
#include<malloc.h>
/*
1) find the length of string
2) fint the number of space of string
3) multiply the space with 2 - because already 1 can be filled %,2,0
4) traverse from last with given string length
5) with the new length decreament and add the characters
6) if space found,just append %20 three characters
7) if not just add the character from given string
8) print the string
*/
void urlify(char *word,int length){
	int i=0,whitespaceCount=0;
	int extraSpace=0;
	char *newWord;

	for(;i<length;i++)
		if(word[i]==' ')
			whitespaceCount++;

	//%20 extra add space 
	extraSpace = (length) + (whitespaceCount*2);
	newWord = malloc(sizeof(char)*extraSpace);
	
	newWord[extraSpace--] = '\0';
	for(i=length-1;i>=0;i--){
		if(word[i] == ' '){
			newWord[extraSpace--] ='0';
			newWord[extraSpace--] ='2';
			newWord[extraSpace--] ='%';
		}
		else
		{
			newWord[extraSpace--] = word[i];
		}
	}
	printf("\n%s", newWord);

}
int main(){

	urlify("google shiva tw",15);
	urlify("shiva surya tce yoyo",20);
	urlify("mail google mam i ",18);
	
}