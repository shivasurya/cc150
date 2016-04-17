#include<stdio.h>
int findTrailingZeros(int  n)
{
    int count = 0;
    int i=0;
 
    for (i=5; n/i>=1; i *= 5)
          count += n/i;
 
    return count;
}
 
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",findTrailingZeros(n));
    return 0;
}