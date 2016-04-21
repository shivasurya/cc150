#include<stdio.h>
#include<string.h>
int main(){
	int testcase =0;
	scanf("%d",&testcase);
	while(testcase--){
		int i = 0;
		int count = 0;
		char word[10001];
		char word1[10001];
		int hashtable[26] = {0};

		scanf("%s",word);
		scanf("%s",word1);

		for(i=0;i<26;i++)
			hashtable[i]=0;	

		for(i=0;i<strlen(word);i++){
			int temp = (int)word[i] - 97;
			hashtable[temp]++;
		}
		for(i=0;i<strlen(word1);i++){
			int temp = (int)word1[i] - 97;
			if(hashtable[temp] > 0)
				hashtable[temp]--;
			else
				count++;
		}
		for(i=0;i<26;i++){
		//	printf("%d\n",hashtable[i]);
			count = count + hashtable[i];
		}
		printf("%d\n",count);
	}
}