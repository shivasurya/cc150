#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    int i=0;
    int count =0;
    int main_count=0;
    scanf("%d",&N);
    char* C = (char *)malloc(10240 * sizeof(char));
    scanf("%s",C);
    for(i=0;i<N;i++){
    	if(C[i]==C[i+1]){
    		count=1;
    	}
    	else
    	{
    		count=1;
    		main_count = main_count+count;
    		count=0;
    	}
    }
    printf("%d\n",main_count);
    return 0;
}
