#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int partition(int start,int end, int *  ar,int ar_size) {
	int index = ar[end-1];
	int pIndex = start;
	int i=0;
	int temps=0;
	for(i=start;i<end-1;i++){
		if(ar[i] <= index){
			int temp = ar[i];
			ar[i] = ar[pIndex];
			ar[pIndex] = temp;
			pIndex = pIndex+1;
		}
	}
	temps = ar[pIndex];
	ar[pIndex]=index;
	ar[end-1]=temps;
printf("pIndex : %d\n",ar[pIndex]);

	for(i = 0;i <ar_size;i++) { 
   			printf("%d ",ar[i]); 
	}
	printf("\n");
return pIndex;
}
void sort(int *ar,int start,int end,int ar_size){
	if(start < end){
		int s = partition(start,end,ar,ar_size);
		sort(ar,start,s,ar_size);
		sort(ar,s+1,end,ar_size);
	}
}
void quickSort(int ar_size, int *ar) {
   // Complete this function
	sort(ar,0,ar_size,ar_size);
	

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}
	
	quickSort(_ar_size, _ar);
   
	   
   return 0;
}
