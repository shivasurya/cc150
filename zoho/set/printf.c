#include<stdio.h>
struct num
 {
 int n1:2;
 int n2:3;
 int n3:4;
 } nums;
 enum SWITCH{off,on};
int main()
{

int x=3,y=4,z=4;
enum SWITCH s= on;
 printf("size of enumeration %d \n", sizeof(enum SWITCH));
 printf("size of object s is %d \n", sizeof(s));
printf("%d%d%d\n",nums.n1,nums.n2,nums.n3);
 printf("ans=%d\n",(z>=y>=x?100:200));
printf("%s %s",("Zoho" "corp" "shivasurya"), ("Campus" "corpp"),("Zoho" "Corporation"));
for(x=0;x++;printf("%d\n",x))
	printf("%d",x);
x=y=0;
if(x++&&y++)
printf("%d%d %d",x,y,x++&&y++);
else
printf("great");
return 0;
}