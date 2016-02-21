#include<stdio.h>
#include<string.h>
/*
1) consider 128 characters ASCII 
2) hashtable implementation - counter sort(cscvenkat)
3) count the frequencies and add it to hashtable
4) second string - just decreament - check < -1 (means the letter occurs more times)
*/
int isPalindrome(char *word1,char *word2){
	int i=0,hashTable[128];
	if(strlen(word1) != strlen(word2))
		return 0;
	if(strlen(word1) > 128 || strlen(word2) > 128)
		return 0;
	//initialize the array
	for(;i<128;i++)
		hashTable[i] = 0;
	
	//counter sorting - hashtable implementation
	for(i=0;i<strlen(word1);i++){
		int c = (int)word1[i];
		hashTable[c]++;
	}

	for(i=0;i<strlen(word2);i++){
		int c = (int)word2[i];
		hashTable[c]--;
		if(hashTable[c] < 0)
			return 0;
	}

	return 1;
}

int main(){
	printf("result : %d",isPalindrome("shiva","avihs"));
	printf("\nresult : %d",isPalindrome("priya","ayirp"));
	printf("\nresult : %d",isPalindrome("google","elggoo"));
	printf("\nresult : %d",isPalindrome("twitter","rettwi"));
}

/* what i learnt 
1) ASCII 128 charset 
3) add frequency of string1
4) with string2 reduce the count - if something new char found it may be reduced to -1 so return false; so there may no false 
5) no need to once again loop to hashtable to find something extra found

optimization 
recommended - BITVECTOR
*/