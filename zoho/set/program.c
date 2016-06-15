#include<stdio.h>
int main(){
	char word[] = {'p','r','o','g','r','a','m'};
	int i=0,j=0;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(i==j)
				printf("%c",word[i]);
			else if(i+j == 6)
				printf("%c",word[6-i]);
			else
				printf(" ");	
		}
		printf("\n");
	}
}