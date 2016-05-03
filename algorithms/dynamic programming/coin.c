#include<stdio.h>
//C(P)  = min(#i -> C(P-Ai), where P >= Ai) + 1
int main(){
	int c[] = {1,2,3,5,7,10,12,15,20};
	int i=0;
	int j=0;
	//we need to find min number of coins to give particular money
	int minanswer[101]={0};
	for(i=1;i<=100;i++){
		int min = 0;
		int flag=0;
		for(j=0;c[j] <= i;j++){
			int temp=0;
			if(minanswer[((i)-c[j])] == 0){
				temp = (i)-c[j];
				if(temp <= min)
					min = temp;
			}
			else{
				temp = minanswer[((i)-c[j])];
				if(flag==0){
					min = temp;
					flag=1;
				}
				else
				{
					if(temp < min)
						min=temp;
				}
			}
		}
		minanswer[i]=min+1;
	}
	for(i=1;i<=100;i++)
		printf("%d ",minanswer[i]);
}