#include<stdio.h>
int val[5][5] = {{1,3,3,4,5},
		   {9,7,8,9,10},
		   {11,3,13,14,15},
		   {5,17,10,19,20},
		   {5,22,0,24,25}
		};
void printer(int a,int b){
	if(a+b == 10)
		printf("%d+%d = 10\n",a,b);
}
void checker(int i,int j){
	if((i-1) >= 0)
		printer(val[i-1][j],val[i][j]);
	if((i+1) < 5)
		printer(val[i+1][j],val[i][j]);
	if((j-1) >= 0)
		printer(val[i][j-1],val[i][j]);
	if((j+1) < 5)
		printer(val[i][j+1],val[i][j]);
}
int main(){
	int i=0;
	int j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			checker(i,j);
		}
	}
}