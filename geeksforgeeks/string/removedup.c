#include<stdio.h>
#include<string.h>
int main(){
	char word[100];
	int i=0;
	int hashtable[26];
	int k=0;
	scanf("%s",word);
	int length = strlen(word);
	
	char word1[length];

	for(i=0;i<26;i++)
		hashtable[i]=0;
	for(i=0;i<length;i++){
		int temp = ((int)word[i]-97);
		hashtable[temp]++;
		if(hashtable[temp] < 2){
			word1[k]=word[i];
			k++;
		}
	}
	word1[k]='\0';
	printf("%s\n",word1);

	return 0;
}