#include<stdio.h>
#include<time.h>

void print(int k,int j){
	printf("%d %d\n",k,j);	
}
int main(){
	long long int i,j,k;
	i=j=k=0;
	clock_t tic = clock();

	for(i=0;i<100000;i++){
		for(j=0;j<100000;j++){
			print(i,j);
		}
	}

	clock_t toc = clock();
	printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	return 0;
}