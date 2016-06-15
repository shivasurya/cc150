#include<stdio.h>
#include<string.h>
char word[][5] = {
		{'W','E','L','C','O'},
		{'M','E','T','O','Z'},
		{'O','H','O','C','O'},
		{'R','P','O','R','A'},
		{'T','I','O','N','\n'}
};
void check(int i,int j,char *search){
	int k=0;
	for(;k<strlen(search);k++){
		if(i >=0 && i < 5){
			if(search[k+1] == word[i+1][j]){
				
			}
		}

	}

	
}
int main(){	
	int i=0;
	int j=0;
	char search[5];
	scanf("%s",search);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(word[i][j] == search[i]){
				check(i,j,search);
			}
		}
	}
}