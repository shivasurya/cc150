#include<stdio.h>
#include<string.h>
int main(){
	int testcase=0;
	scanf("%d",&testcase);
	while(testcase--){
		int i=0;
		int oddcount=0;
		char word[1000];
		scanf("%s",word);
		int hashtable[26] = {0};
		int length = strlen(word);
		for(i=0;i<length;i++){
			int temp = (int)word[i] - 97;
			hashtable[temp]++;
		}
		for(i=0;i<26;i++){
			if(hashtable[i] > 0){
				if(hashtable[i]%2!=0)
					oddcount++;
			}
		}
		if(oddcount==0){
			printf("0\n");
		}
		else if(oddcount==1){
			printf("0\n");
		}
		else{
			oddcount = oddcount-1;
			printf("%d\n",oddcount);
		}
	}
}