#include<stdio.h>
#include<math.h>
int checkforsqrt(int num){
	int a = sqrt(num);
	if(a*a == num)
		return 5;
	else 
		return 0;
}
int checkfordiv(int num){
	if(num%6 == 0)
		if(num%4 == 0)
			return 4;
		else
			return 0;
	else
		return 0;
}
int checkforodd(int num)
{
	if(num%2 == 0)
		return 3;
	else
		return 0;
}
int main(){
	int num=0;
	int val[5];
	int i=0;
	int j=0;
	int weight[5];
	while(num < 5){
		int temp = 0;
		scanf("%d",&val[num]);
		temp = temp + checkforsqrt(val[num]);
		temp = temp + checkfordiv(val[num]);
		temp = temp + checkforodd(val[num]);
		weight[num] = temp;
		num++;
	}
	for(;i<5;i++){
		for(j=i+1;j<5;j++){
			if(weight[i] > weight[j]){
				int stemp=weight[j];
				weight[j] = weight[i];
				weight[i] = stemp;
				stemp = val[j];
				val[j] = val[i];
				val[i] = stemp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("<%d %d> \t",val[i],weight[i]);
	}
}