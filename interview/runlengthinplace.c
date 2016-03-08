/*
author : s.shivasurya
date : 8/3/2016

question : 
2.Find the occurrence of character in given string. Should not use additional memory.
Eg: AAAABCCCDD
o/p: A4BC3D2
ignore the character that is repeated again.


Algorithm:
 have newindex for array as 0(int)
1) traverse the array
2) check the element and element+1 character
3) if true then count++
4) else then count++
	update the existing array with newindex with character
	increament newindex
	update the array with count with newindex with number(ASCII char)
	increament newindex
	count = 0
5) need to check the edge case : if 1 element alone occurs then ignore it

O(n) complexity 

*/
#include<stdio.h>
void compress(){
	int count = 0;
	int newCharIndex = 0;
	int len = 10;
	char word[] = {'s','s','h','h','h','j','j','v','v','a'};
	int i=0;


	for(i=0;i<len;i++){
		if(word[i]!=word[i+1]){
			count++;
			word[newCharIndex] = word[i];
			newCharIndex = newCharIndex+1;
			word[newCharIndex] = (char)(count+48);
			newCharIndex = newCharIndex+1;
			count = 0;
		}
		else
		{
			count++;
		}
	}
	word[len]='\0';
	printf("%s\n",word);

}
int main(){
	compress();
}