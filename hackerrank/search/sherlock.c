#include<stdio.h>
int main(){
	int testcase=0;
	scanf("%d",&testcase);
	while(testcase--){
		int n,i;
		int right_sum=0;
		int left_sum=0;
		int flag=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			right_sum =right_sum+a[i];
		}
		for(i=0;i<n;i++){
			if(i!=0)
			left_sum = left_sum + a[i-1];
			right_sum = right_sum - a[i];
			//printf("%d% d\n",left_sum,right_sum);
			if(left_sum==right_sum)
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
}