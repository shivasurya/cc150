#include<stdio.h>
#include<string.h>
int main(){
	char word[10];
	char name[5];
	scanf("%s",word);
	scanf("%s",name);
	int i=0;
	int flag = 1;
	for(;i<strlen(word);i++){
		if(word[i] == name[0]){
			int j=1;
			int runner = i+1;
			while(j < strlen(name)){
				if(word[runner++] != name[j++]){
					flag = 0;
					break;
				}
			}
		
			if(flag == 1 && j==strlen(name)){
				printf("%d\n",i);
				break;
			}
			flag=1;
		}
	}
}