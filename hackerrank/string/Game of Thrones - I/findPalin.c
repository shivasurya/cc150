#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
     
    int flag = 1;
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    int hashtable[26];
    int oddcounter = 0;
    int i=0;
    for(i=0;i<26;i++)
        hashtable[i]=0;
    for(i=0;arr[i] != '\0';i++){
        int temp = ((int)arr[i])-97;
        hashtable[temp]++;
    }
    for(i=0;i<26;i++){
        if(hashtable[i]%2!=0)
            oddcounter++;
        if(oddcounter > 2){
            flag = 0;
            break;
        }
    }


    if (flag==0)
        printf("NO\n");
    else
        printf("YES\n");
    
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
