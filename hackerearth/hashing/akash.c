#include<stdio.h>
#include<string.h>
int main(){
	int n;
	int q;
	int i=0;
	int j=0;
	scanf("%d",&n);
	scanf("%d",&q);
	char word[n];
	scanf("%s",word);	
	for(j=0;j<q;j++){
		int hashtable[26]={0};
		int l,r,k;
		scanf("%d",&l);
		scanf("%d",&r);
		scanf("%d",&k);
		for(i=l-1;i<=(r-1);i++){
			int temp = (int)word[i] - 97;
			hashtable[temp]++;
		}
		i=0;
		while(k > 0 && i<26){
			if(hashtable[i] > 0){
				k--;
			}
			i++;
		}
		//printf("%d\n",i);
		if(k > 0)
			printf("Out of range\n");
		else if(k==0)
			printf("%c\n",(i-1)+97);
	}
}