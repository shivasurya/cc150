#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
	if(a > b)
		return a;
	else
		return b;
}
int main(){
	int num[10];
	int total = 0;
	int i=0;
	int start,end=0;
	int largestseq=0;
	int prev_total=0;
	int finalstart,finalend;

	for(i=0;i<8;i++){
		scanf("%d",&num[i]);
	}
	total = num[0];
	end=0;
	start=0;
	largestseq=0;
	for(i=1;i<8;i++){
		total = max(total+num[i],num[i]);
		if(total==num[i]){
			if(largestseq < (end-start)){
				finalend = end;
				finalstart=start;
			}
			largestseq = end-start;
				printf("==>%d %d\n",start,end);
				end=0;
				start=i; 
		}
		else{
			if(prev_total==0)
				prev_total=total;
			else{
				if(prev_total < total){
					end=i;
					prev_total = total;
				}
			}
			if(largestseq < (end-start)){
				largestseq = end-start;
				finalend = end;
				finalstart=start;
			}
		}
	}
	printf("%d %d\n",finalstart,finalend);
}