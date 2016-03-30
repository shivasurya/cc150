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
	for(i=0;i<length;i++)
		hashtable[((int)word[i]-97)]++;
	length = hashtable[0];

	for(i=1;i<26;i++){
		if(length < hashtable[i]){
			length = hashtable[i];
			k=i;
		}
	}
	printf("%c\n",k+97);
	return 0;
}