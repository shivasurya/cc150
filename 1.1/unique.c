#include<stdio.h>
#include<string.h>
/*
1) ask for ascii or unicode characters
2) consider ascii 256 [ 0 - 255 ] ASCII characters + extended
3) create hash table and set max value to 999
4) if it is not present just append else return false,this denotes 
	that already present in hashtable and break the program
5) display unique or duplicate

*/
int checkForUnique(char *word){
	int hash[256];
	int i=0;

	if(strlen(word) > 256) return 0;
	
	for(;i<256;i++)
		hash[i] = 999;

	for(i=0;i<strlen(word);i++){
		if(hash[(int)word[i]]!=999)
			return 0;
		else
			hash[(int)word[i]] = (int)word[i];
	}
	return 1;
}
int main(){
	char word[300];
	printf("Enter the String");
	gets(word);
	printf("%d\n",strlen(word));
	if(strlen(word) > 0){
		if(checkForUnique(word))
			printf("Contains UNIQUE");
		else
			printf("contains Duplicate");
	}
	return 0;
}