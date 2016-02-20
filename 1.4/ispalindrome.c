#include<stdio.h>
#include<string.h>
/*

i have given this algo description briefly to revise myself may be after few months :D 


1)count size of word array
2)counter sort - implement hash table
3)mean while verify that even number of characters
4) whole idea is to have single odd character frequency(ex: c - 1 or 3 or 5 and not any other character) + multiple even 
5) return if countOdd <=1 true else it will not make palindrome.
*/
int isPalindrome(char *word){

	int length = strlen(word);
	int hashTable[128];
	int i=0,countOdd=0;

	if(length <= 0)
		return 0;
	
	for(;i<128;i++)
		hashTable[i]=0;

	for(i=0;i<length;i++){
		hashTable[(int)word[i]]++;
		if(hashTable[(int)word[i]] % 2 == 1)
			countOdd++;
		else
			countOdd--;
	}

	return countOdd <= 1;

}
int main(){
	printf("%d\n",isPalindrome("shivasurya"));
	printf("%d\n",isPalindrome("malayalam"));
	printf("%d\n",isPalindrome(":twt:"));
	printf("%d\n",isPalindrome("google"));
	printf("%d\n",isPalindrome("go"));
		
}