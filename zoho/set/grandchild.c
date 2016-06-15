#include<stdio.h>
#include<string.h>
//learnt from : http://markandayannotes.blogspot.in/2015/08/given-two-dimensional-array-of-string.html
char *names[][2]={
   {"luke", "shaw"},
   {"wayne", "rooney"},
   {"rooney", "ronaldo"},
   {"shaw", "rooney"}
 };
 int count = 0;
void grandchildcount(char *namer){
	int i=0;
	for(i=0;i<4;i++){
		if(strcmp(namer,names[i][1]) == 0){
			count++;
		}
	}
	printf("%d\n",count);
}
int main(){
	int i=0;
	char word[10];
	scanf("%s",word);
	for(i=0;i<4;i++){
		if(strcmp(word,names[i][1]) == 0){
			grandchildcount(names[i][0]);
		}
	}
}