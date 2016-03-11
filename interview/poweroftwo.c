/*
author : s.shivasurya
date 11-3-2016

check that given number is power of 2

convert into binary - common pattern that 2^ something will have only 1 bit as 1 and rest zero
take a number decreament and do AND operation

if you get 1 then its not power of two else 
it is power of two

And operation is just boolean Table and operation
*/
#include<stdio.h>
void ispoweroftwo(int a){
	if(a==0)
		printf("Not power of 2\n");
	if((a & (a-1)) == 0)
		printf("power of 2\n");
	else
		printf("Not power of 2\n");
}
int main(){
	ispoweroftwo(4);
	ispoweroftwo(128);
	ispoweroftwo(25000);
	ispoweroftwo(999);
}