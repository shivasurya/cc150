#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i=0;
    char *word;
    char *word1;
    int count=0;
    int hashtable[26];

    word = malloc(10000);
    word1 = malloc(10000);
    scanf("%s",word);
    scanf("%s",word1);
    
    for(i=0;i<26;i++)
    	hashtable[i]=0;

    for(i=0;word[i]!='\0';i++)
    {
    	int temp = ((int)word[i]-97);
		hashtable[temp]++;
    }
	for(i=0;word1[i]!='\0';i++)
	{
		int temp = ((int)word1[i]-97);
		hashtable[temp]--;
	}
	for(i=0;i<26;i++){
		//printf("%d",hashtable[i]);
		count = count + abs(hashtable[i]);
	}
	printf("\n%d",count);
    return 0;
}
