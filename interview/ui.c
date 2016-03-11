/*
array has numbers
pick contigous three elements and find max and return

author : shivasurya
date : 11-3-2016
*/

#include<stdio.h>
#define SELECTOR 3
int pickHighest(int a[]){
	int highest=a[0];
	int i=1;
	for(;i<SELECTOR;i++)
		if(highest < a[i])
			highest = a[i];

	return highest;
}
void processing(int a[],int length){
	int b[SELECTOR];
	int i=0;
	int j=0;
	for(;i<(length-SELECTOR+1);i++){
		b[j++] = a[i+0];
		b[j++] = a[i+1];
		b[j++] = a[i+2];
		j=0;
		int temp = pickHighest(b);
		printf("%d\n",temp);	
	}
}
int main(){
	int a[] = {1,4,5,7,8,1,2,3};
	processing(a,8);
}