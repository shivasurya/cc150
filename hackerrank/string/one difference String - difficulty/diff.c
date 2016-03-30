#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int hashtable[26];
    int hashed[100000];
    int i=0;
    int length=0;
    int flag=0;
    char word[100000];
    int check = 0;
    scanf("%s",word);
    length = strlen(word);
    for(i=0;i<26;i++){
    	hashtable[i]=0;
    }

    for(i=0;i<100000;i++){
        hashed[i]=0;
    }
    for(i=0;word[i]!='\0';i++){
    	int temp = ((int)word[i])-97;
    	hashtable[temp]++;
    }

    for(i=0;i<26;i++){
    	//printf("%d \t",hashtable[i]);
    	if(hashtable[i] > 0)
    		hashed[hashtable[i]]++;
    }
    //printf("\n");
    
    length = hashed[0];
    for(i=0;i<100000;i++){
    //	printf("%d \t",hashed[i]);
    	if(length < hashed[i]){
    		length = hashed[i];
    		check = i;
    	}
    }

    //printf("==%d\n",length);
    for(i=0;i<26;i++){
    	if(check!=hashtable[i] && hashtable[i] > 0){
            flag++;
            if(flag >= 2)
                break;
        }
    }

    if(flag >= 2)
    	printf("NO\n");
    else
    	printf("YES\n");

    return 0;
   
}
