#include<stdio.h>
int main(){
	int n;
	int i=0;
	scanf("%d",&n);
	int a[n];
	int j=0;
	int flag=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				//printf("-->%d\n",a[i]%a[j]);
				if(a[i]%a[j]==0){
					flag=1;
					break;
				}
			} 
		}	
	if(flag==0)
		printf("%d ",a[i]);
	flag=0;
	}
}