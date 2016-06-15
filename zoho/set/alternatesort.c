#include<stdio.h>
int main(){
	int a[] = {13,2,4,15,12,10,5};
	int answer[7];
	int i=0;
	int j=0;
	int prev =0;
	for(i=0;i<7;i++){
		int large = a[i];
		for(j=0;j<7;j++){
			if(i%2==0)
			{
				if(a[j] > large){
					large = a[j];
				}
			}
		}
		if(i%2==0)
		printf("%d\n",large);		
	}
}