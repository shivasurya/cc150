#include<stdio.h>
#include<string.h>
int main(){
	int testcase=0;
	scanf("%d",&testcase);
	while(testcase--){
		int hashtable[26]={0};
		int i=0;
		int flag=0;
		char word[100000];
		scanf("%s",word);
		for(i=0;i<strlen(word);i++)
		{
			int temp = (int)word[i]-97;
			hashtable[temp]++;
		}
		for(i=0;i<strlen(word);i++)
		{
			int temp = (int)word[i]-97;
			if(hashtable[temp]%2!=0){
				flag=1;
				break;
			}		
		}
		if(flag==1)
			printf("-1\n");
		else
			printf("1\n");
	}
}