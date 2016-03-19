#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *ar) {
    int i=1;
    int j=0;
    for(;i<ar_size;i++){
    	int hole = i;
    	int value = ar[i];
    	while(hole > 0 && (value < ar[hole-1])){
      		ar[hole] = ar[hole-1];
      		hole = hole-1;
    	}
    	ar[hole] = value;
        for(j=0;j<ar_size;j++)
            printf("%d ",ar[j]);
        printf("\n");
    }
}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
