#include<stdio.h>
int main(){
	int min = 3;
	int max = 15;
	int i=min+1;
	for(;i<max;i++){
		if(i%2!=0)
			printf("%d ",i);
	}
}