#include<stdio.h>
#include<string.h>
int main(){
	char word[] = {'p','r','o','g','r','a','m'};
	int i=0;
	int j=0;
	int length = strlen(word);
	for(i=0;i<length;i++){
		for(j=0;j<length;j++){
			if(i==j){
				printf("%c",word[i]);
			}
			else if(i+j==length-1){
				printf("%c",word[(length-1)-i]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}