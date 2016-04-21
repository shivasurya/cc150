#include<stdio.h>
int main(){
	int testcase=0;
	scanf("%d",&testcase);
	while(testcase--){
		int n,i;
		int hashtable[10]={0};
		int collison = 0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<10;i++)
			hashtable[i]=0;

		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			hashtable[a[i]%10]++;
		}
		for(i=0;i<10;i++){
		//	printf("%d\n",hashtable[i]);
			if(hashtable[i] > 1)
				collison = collison+(hashtable[i]-1);
		}
		printf("%d\n",collison);
		
	}
}