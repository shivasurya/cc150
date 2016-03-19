#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number;
    int i=0;
    scanf("%d",&number);
    int arr[number];
    int hashtable[100];


    for(i=0;i<99;i++)
    	hashtable[i]=0;

    
    for(i=0;i<number;i++){
    	scanf("%d",&arr[i]);
    	hashtable[arr[i]]++;
    }
    for(i=0;i<100;i++)
    	printf("%d ",hashtable[i]);

    return 0;
}
