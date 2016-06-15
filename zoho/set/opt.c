#include<stdio.h>
#include<time.h>

void print(int k,int j){
	printf("%d %d\n",k,j);	
}
int main(){
	long long int i,j,k;
	i=j=k=0;
	clock_t tic = clock();

	while(i++<(100000*100000)-1){
		if(i%100000==0){
			k++;
			j=0;
			print(k,j++);
		}
		else
			print(k,j++);
	}

	clock_t toc = clock();
	printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	return 0;
}