#include<stdio.h>
#include<time.h>
/*
followed mycodeschool sorting lessons

1) two subset - sorted subset/unsorted subset
2) start from 1 in array since 1st element will be always sorted
3) take a element from the right side(unsorted part)
4) copy that value and hole postion
4) compare from last element from the left sorted subset
5) if it is smaller move the higher value to next position and reduce the hole
6) do step 5 in while loop until you find the value is smaller
7) place the value in hole(while it is reduced automatically)

proceed the step 3-7 until right part becomes empty

8) now left part becomes sorted part and right is empty

complexity :
if it sorted array - O(n) best case
 O(n^2) at worst case
since you have to traverse inner while loop this will for Arithmetic progression
(1+2+....n-1)n-1 - will give out => (n-1)*(n-1)/2

average case - O(n^2) consider traversing half of inner while loop


time : 9:30 AM
10^5 input - it took me 14.something seconds to sort 
took random values
*/
void insertionSort(long int a[],long int length){
	long int i=0,k=0;
	for(i=1;i<length;i++){
		long int val = a[i];
		long int hole = i;
		while(hole > 0 && (a[hole-1] >  val))
		{
			a[hole] = a[hole-1];
			hole = hole - 1;
		}
		a[hole] = val;
	}
//	for(i=0;i<length;i++)
//		printf("%d  ",a[i]);
	printf("\n");
}
int main(){
	long int a[100000];long int c,m=5;
	clock_t t1, t2;
	double time_spent;

	while(m--){
		for (c = 0; c < 100000; c++) {
   			 long int n = rand() % 1000000 + 1;
    		 a[c] = n;
  		}
  		t1 = clock();   
  		insertionSort(a,100000);
  		t2 = clock();   
	   time_spent = (double)(t2 - t1) / CLOCKS_PER_SEC;  
    	printf("%f",time_spent);   
	}
}