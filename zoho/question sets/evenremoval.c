#include<stdio.h>
int main(){
	int a[10];
	int i=0;
	int s=0;

	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			if(s!=i){
				a[s] = a[i];
				a[i] = 0;
				s++;
			}
		}
		else
		{
			a[i]=0;
		}
	}
	for(i=0;i<10;i++)
		printf("%d",a[i]);
}