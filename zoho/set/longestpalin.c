#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main(){
	int i=0;
	int j=0;
	char word[100];
	gets(word);
	int hash[26]={0};
	int even_count = 0;
	int odd_count = 0;
	int len = strlen(word);
	for(i=0;i<len;i++){
		if(word[i]!=' '){
			hash[(int)word[i]-97]++;
		}
	}

	for(i=0;i<26;i++){
		if(hash[i]%2==0 && hash[i]!=0){
			even_count++;
		}
		else if(hash[i]==0){

		}
		else
		{
			odd_count++;
		}
	}
	printf("%d\n",even_count);
	printf("%d\n",odd_count);
	if(odd_count > 0)
		odd_count = 1;
	int tot = even_count+odd_count;
	char words[tot];
	int slider = 0;
	int flag = 0;
	//words = malloc((even_count+odd_count)*sizeof(char));
    for(i=0;i<26;i++){
    	char c = (char)i+97;
    	int occur = hash[i];
    	if(occur%2==0 && occur!=0){
    		for(j=slider;occur >= 0;j++){
    			words[j] = c;
    			words[(tot-1)-j] = c; 
    			occur--;
    			slider++;
    		}
    	}
    	else
    	{
    		if(flag==0){
    			for(j=(((tot-1)/2)-occur/2);occur >= 0;j++){
    				 words[j] = c;
    				 occur--;
    				 flag = 1;
     			}
     		}	
    	}
    }
    for(i=0;i<tot;i++){
    	printf("%c",words[i]);
    }	
}