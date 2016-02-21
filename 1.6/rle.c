#include<stdio.h>
#include<string.h>
#include<malloc.h>
/*
algorithm - at first time i done for O(n^2)
and then learnt to eliminate by adding counter variable that can handle the count.

1) compression algorithm Run Length 
2) get the string 
3) have the count variable initialized
4) increament the counter until the (current,next) character are same
5) else increament the counter(since we count number of char) 
6) convert to ASCII - { 0-48,1-49 }
7) append the character and counter to char Array
8) initialize counter once again and go back to step 4
9) check the length of new string and old string and return which is smaller in length

10) allocate the new string value double the old string - however since we dont need exception in C language
11) terminate it with null character at last to determine the length of new String

12) i haven't handled for Lowercase and Uppercase (considered both are different) 

*/
char *doRLE(char *word){
	int i=0,j=0;
	char *newWord;
	int count=0;
	newWord = malloc(sizeof(char) * strlen(word)*2);

	for(j=0;i<strlen(word);i++){

		if(word[i]!=word[i+1]){
			count++;
			char d = (char)(count + 48);
			newWord[j++] = word[i];
			newWord[j++] = d;
			count = 0;
		}
		else
			count++;
	}
	newWord[j] = '\0';

	return (strlen(newWord) < strlen(word)) ? newWord : word;
}
int main(){
	char *newWord = doRLE("ssshhhiivva");
	printf("%s\n",newWord);
	char *newWord1 = doRLE("google");
	printf("%s\n",newWord1);
	char *newWord2 = doRLE("uUYccAqbRtzFMYxFQkfEv");
	printf("%s\n",newWord2);
	char *newWord3 = doRLE("ppaahhyty");
	printf("%s\n",newWord3);

}