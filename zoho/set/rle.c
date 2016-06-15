#include<stdio.h>
#include<string.h>
void calculate(int number,char c){
	while(number--)
		printf("%c",c);
}
int main(){
	char word[100];
	int length = 0;
	int i=0;
	scanf("%s",word);
	length = strlen(word);
	
	char c;
	int number = 0;
	int flag = 0;
	for(;i<length;i++){
		if((int)word[i] >= 48 && (int)word[i] <= 57){
			number = (number*10)+(word[i]-48);
		}
		else
		{
			if(flag==1){
				calculate(number,c);
				number = 0;
			}
			c = word[i];
			flag = 1;
		}
	}
	calculate(number,c);
	//to run the last char number	
}