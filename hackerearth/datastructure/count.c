#include<stdio.h>
#include<malloc.h>
int main(){
	int testcase=0;
	int *a;
	a = malloc(1000000*sizeof(int));
	scanf("%d",&testcase);
	while(testcase--){
		int number=0;
		int i=0;
		int max;
		scanf("%d",&number);
		for(i=0;i<number;i++){
			int temp;
			scanf("%d",&temp);
			a[temp]++;
		}
		max=a[0];
		for(i=1;i<1000000;i++){
			if(a[i] > max){
				max=a[i];
			}
		}
		for(i=999999;i>=0;i--){
			if(max==a[i])
			printf("%d ",i);
			a[i]=0;
		}
		printf("\n");
	}
}