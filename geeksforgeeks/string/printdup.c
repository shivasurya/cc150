#include<stdio.h>
#include<string.h>
int main(){
	char word[100];
	int i=0;
	int hashtable[26];
	int k=0;
	scanf("%s",word);
	int length = strlen(word);
	
	for(i=0;i<26;i++)
		hashtable[i]=0;
	for(i=0;i<length;i++){
		int temp = ((int)word[i]-97);
		hashtable[temp]++;
		if(hashtable[temp] >= 2){
			printf("%c",temp+97);
		}
	}
	
	return 0;
}