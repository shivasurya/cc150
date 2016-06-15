#include<stdio.h>
#include<string.h>
void swap(char *a,char *c){
	char temp;
	temp = *a;
	*a = *c;
	*c = temp;
}
void permutation(char *a,int l,int r){
	int i;
	if(l==r)
		printf("%s\n",a);
	else{
		for(i=l;i<=r;i++){
			swap((a+l),(a+i));
			permutation(a,l+1,r);
			swap((a+l),(a+i));
		}
	}
}
int main(){
	char name[] = "9788029400";
  int len = strlen(name);
	permutation(name,0,len-1);
}