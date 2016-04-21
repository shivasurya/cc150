#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	int n=0;
	int length = 0;
	scanf("%d",&n);
	char word[n];
	int a,e,ik,o,u;
	a=e=ik=o=u=0;
	scanf("%s",word);
	length = strlen(word);
	for(i=0;i<length;i++){
		if(word[i] == 'a')
			a++;
		else if(word[i] == 'e')
			e++;
		else if(word[i] == 'i')
			ik++;
		else if(word[i] == 'o')
			o++;
		else if(word[i] == 'u')
			u++;
	}
	if(a > 0 && e > 0 && ik > 0 && o > 0 && u > 0)
		printf("YES");
	else
		printf("NO");
}