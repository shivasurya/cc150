#include<stdio.h>
int main(){
	float a = 0.7;
	int i=1;
	int j=1;
	if(a < 0.7)
		printf("nothing much\n");
	else
		printf("this is what program\n");

	printf("%d\n",a && a);
	if((a && a) > 0.9)
		printf("ok\n");
	else
		printf("not okay\n");

	for(i=1;i++ <= 5;printf("%d\n",i));
	for(i=1;j;printf("%d%d\n",i,j))
		j-=i++<=5;
}