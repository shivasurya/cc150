#include<stdio.h>
#include<math.h>
struct holder{
	int data;
	int weight;
};
int main(){ 
	int s[] = {10,36,54,89,12};
	struct holder a[5];
	int i=0;
	
	for(;i<5;i++)
		a[i].data = s[i];

	printf("%d\n",primeFactors(10));
	for(i=0;i<5;i++){
		a[i].weight = 0;
		if(primeFactors(a[i].data)==1){
			a[i].weight = a[i].weight+5;	
		}
		if(a[i].data%4 == 0 && a[i].data%6 == 0){
			a[i].weight = a[i].weight+4;
		}
		if(a[i].data %2==0)
			a[i].weight = a[i].weight+3;
		printf("%d - %d \n",a[i].data,a[i].weight);
	}
	for(i=0;i<5;i++){
		int j=i+1;
		for(;j<5;j++){
			if(a[j].weight < a[i].weight)
			{
				int temp = a[j].weight;
				a[j].weight = a[i].weight;
				a[i].weight = temp;
				temp = a[j].data;
				a[j].data = a[i].data;
				a[i].data = temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d - %d \n",a[i].data,a[i].weight);	
	}
}
int primeFactors(int no)
{	int i=0;
	for(i = 2;no!=1; i++){
		int pow = 0;
		while(no > 0 && no%i == 0){
			pow++;
			no /=i;
	//		printf("%d\n",no);
		}
		if(pow%2 != 0){
			return 0;
		}
	}
	return 1;
}