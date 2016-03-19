#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    int i=0;
    char name[10];
    scanf("%d",&number);
    int arr[number];
    int count=0;
    int hashtable[100];


    for(i=0;i<99;i++)
    	hashtable[i]=0;

    
    for(i=0;i<number;i++){
    	scanf("%d %s",&arr[i],name);
    	hashtable[arr[i]]++;
    }
        
    for(i=0;i<100;i++){
    	count = count+hashtable[i];
        printf("%d ",count);
    }

    return 0;
}
