#include<stdio.h>
#include<string.h>
int main(){
	int a;
	int hashtable[26]={0};
	int i=0;
	int j=0;
	int flag=0;
	scanf("%d",&a);
	for(i=0;i<a;i++){

	for(j=0;j<26;j++)
		hashtable[j]=0;
		char c[101];
		int length=0;
		scanf("%s",c);
		length = strlen(c);
		//printf("%d\n",length);

		for(j=0;j<length;j++){
			int temp = (int)c[j] - 97;
			hashtable[temp]++;
		}
		for(j=0;j<26;j++){
		//	printf("%d\n",hashtable[j]);
			if(hashtable[j]%2==0 && hashtable[j]!=0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			for(j=0;j<26;j++){
			if(hashtable[j]%2!=0 && hashtable[j]!=0){
				if(hashtable[j] > 2)
				{
					flag = 1;
					break;
				}
			}
			}
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
		flag=0;
	}
	return 0;
}