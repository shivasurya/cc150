#include<stdio.h>
int main(){
	int number = 0;
	scanf("%d",&number);
	int divider=2;
	int count = 0;

	while(number>1){
		int remainder = number%2;
		if(remainder)
			count++;
		number = number/2;
	}
	if(number==1) count++;
	printf("%d\n",count);
	return 0;
}