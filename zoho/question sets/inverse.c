#include<stdio.h>
int main(){
	char name[100];
	scanf("%s",name);
	int i=0;
	int j=0;
	int count=0;
	for(i=0;name[i]!='\0';i++){
		count++;
	}
	for(i=0,j=count-1;i <= count/2 && j >= count/2;i++,j--){
		char temp = name[j];
		name[j] = name[i];
		name[i] = temp;
	}
	for(i=0;i<count;i++)
		printf("%c",name[i]);
	return 0;
}