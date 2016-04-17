#include<stdio.h>
#include<string.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))
int main(){
	int hashtable[26]={0};
	int i=0;
	int n=0;
	scanf("%d",&n);
	while(n--){
		char a[101];
		scanf("%s",a);
		int length = strlen(a);
		for(i=0;i<26;i++)
			hashtable[i]=0;
		for(i=0;i<length;i++){
			int temp = (int)a[i] - 97;
			hashtable[temp]++;
		}
		if(hashtable[20] > 0 && hashtable[24] > 0 && hashtable[1] > 0 && hashtable[17] > 0){
			int temp = min(min(hashtable[20],hashtable[24]),min(hashtable[1],hashtable[17]));
			printf("%d\n",temp);
		}
		else
		{
			printf("0\n");
		}
	}
}