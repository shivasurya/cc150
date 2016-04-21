#include<stdio.h>
#include<string.h>
int main(){
	int hashtable[256] = {0};
	int i=0;
	char word[10001];
	int highest = 0;
	int index = 0;
	gets(word);
	int length = strlen(word);
	for(i=0;i<length;i++){
		int temp = (int)word[i];
	//	printf("%d\n",temp);
		hashtable[temp]++;
	}
	highest = hashtable[0];
	for(i=1;i<256;i++){
		if(hashtable[i] > highest && (hashtable[i]!=highest)){
			highest = hashtable[i];
			index = i;
		}
	}
	printf("%c %d",index,highest);
}