#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   	char word[10000];
   	int hashtable[26];
   	int testcase =0;
   	int i=0;
   	int count=0;
   	scanf("%d",&testcase);
   	while(testcase-- > 0){
   	scanf("%s",word);
   	for(i=0;i<26;i++)
   		hashtable[i]=0;
   	count = 0;
   	if(strlen(word)%2==0){
   		for(i=strlen(word)/2;i<strlen(word);i++){
   			int temp = ((int)word[i])-97;
   			hashtable[temp]++;
   		}
   		for(i=0;i<strlen(word)/2;i++){
   			int temp = ((int)word[i])-97;
   			hashtable[temp]--;
   		}
   		for(i=0;i<26;i++){
   		//	printf("%d",hashtable[i]);
   			if(hashtable[i] > 0)
   			count = count + hashtable[i];
   		}
   		printf("%d\n",count);
   	}
   	else
   	{
   		printf("%d",-1);
   	}
   }
    return 0;
}
