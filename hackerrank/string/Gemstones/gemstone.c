#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a=0;
    scanf("%d\n",&a);
    char *s[a][100];
    int i=0;
    int j=0;
	int count=0;
	int hashtable[26];
	
    for(;i<a;i++){
    	char word[100];
    	scanf("%s",word);
    	for(j=0;j<strlen(word);j++)
    		s[i][j]=word[j];
    	s[i][strlen(word)]='\0';
    }
    for(i=0;i<26;i++)
		hashtable[i]=0;

	for(i=0;i<a;i++)
	{
		for(j=0;s[i][j]!='\0';j++){
		//	printf("%c",s[i][j]);
			char c = s[i][j];
			int temp = ((int)c-97);
			int t = i;
			if(t==0)
				hashtable[temp]=t+1;
			else
			{
				if(hashtable[temp]==t)
					hashtable[temp]=t+1;
			}
		}
	}
	for(i=0;i<26;i++){
	//	printf("%d",hashtable[i]);
		if(hashtable[i]==a){
			count++;
		}
	}
	printf("%d\n",count);

    return 0;
}
