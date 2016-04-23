#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int stack[n];
	int top=-1;
	int i=0;
	for(i=0;i<n;i++)
		stack[i]=0;
	for(i=0;i<n;i++){
		int query;
		scanf("%d",&query);
		if(query==1){
			if(top < 0)
				printf("No Food\n");
			else
			printf("%d\n",stack[top--]); 
		}
		else
		{
			int package_cost;
			scanf("%d\n",&package_cost);
			stack[++top]=package_cost;
		}	
	}
}