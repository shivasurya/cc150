#include<stdio.h>
#include<string.h>
int main(){
	char word[100];
	char word1[100];
	int i=0;
	int hashtable[26];
	int k=0;
	scanf("%s",word);
	scanf("%s",word1);
	int length = strlen(word);
	int length1 = strlen(word1);
	
	for(i=0;i<26;i++)
		hashtable[i]=0;
	for(i=0;i<length;i++){
		int temp = ((int)word[i]-97);
		hashtable[temp]++;
	}
	for(i=0;i<length1;i++){
		int temp = ((int)word1[i]-97);
		if(hashtable[temp] > 0)
			hashtable[temp]=0;
	}
	for(i=0;i<length;i++){
		int temp = ((int)word[i]-97);
		if(hashtable[temp] > 0)
			printf("%c",word[i]);
	}
	
	
	return 0;
}