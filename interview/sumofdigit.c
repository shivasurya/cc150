/*
Question :
1.Find the sum of the digits of given number.
Eg:
Input: 
14->1+4->5.
165->1+6+5->1+2->3

author : s.shivasurya
date : 8/3/2016
algo:
1) get a number split the number by mod 10 remainder
2) sum it up
3) check that sum is > 9 =>recursion call above function with sum as data
4) else return sum directly

cscvenkat suggested : O(n^2) as time complexity


*/

#include<stdio.h>

int sum(int data){
	int sums = 0;
	while(data){
		sums = sums + (data%10);
		data = data / 10;
	}
	while(sums > 9){
		return sum(sums);
	}
	return sums;
}
int main(){
	int temp=0;
	temp = sum(999);
	printf("\nans=>%d\n",temp);
	temp = sum(1128);
	printf("\nans=>%d\n",temp);

}