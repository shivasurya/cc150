#include<stdio.h>
int main(){
	int a[10];
	int max=a[0];
	int secondmax=a[1];
	int i=0;

	for(i=0;i<10;i++){
		scanf("%d",&a[i]);	
	}

	for(i=2;i<10;i++){
		if(a[i] > secondmax){
			if(a[i] > max){
				secondmax = max;
				max = a[i];
			}
			else
			{
				secondmax = a[i];
			}
		}
	}
	printf("%d\n",secondmax);
}