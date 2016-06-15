#include<stdio.h>
#include<string.h>
int main(){
	char word[10];
	scanf("%s",word);
	int i=0;
	int j=0;
	int k=0;
	int length = strlen(word);
	for(i=0;i<length;i++){
		int temp = i;
		for(j=i;j<length;j++){
			int temps = j; //getting state to run
			while(temp <= temps){
				printf("%c",word[temp]);
				temp++;
			}
			//to generate
			printf("\n");
			temp = i;	//reseting to last state
		}
	}
}