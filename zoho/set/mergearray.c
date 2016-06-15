#include<stdio.h>

int checker(int a[],int n,int len){
	int i=0;
	for(;i<len;i++){
		if(a[i] == n){	
		//printf("%d %d\n",a[i],n);
			return 0;
		}
	}
	return 1;
}
int main(){

	int a[] = {1,1,1};
	int b[] = {1,1,1};
	int c[100]={0};
	int i=0;
	int k=0;
	int j=0;
	int count=0;
	int a_length = 3;
	int b_length = 3;
	//lets keep static length for now
	
	while((i<a_length) && (j<b_length)){
		//printf("%d - %d\n",a[i],b[j]);
		if(a[i] < b[j]){
			if(checker(c,a[i],k)){
				c[k++] = a[i++];
				count++;
			}
			else
				i++;
		}
		else if(a[i] == b[j]){
			if(checker(c,a[i],k)){
				c[k++] = a[i++];
				j++;
				count++;
			}
			else{
				i++;
				j++;
			}
		}
		else{
			if(checker(c,b[j],k)){
				c[k++] = b[j++];
				count++;
			}
			else
				j++;
		}
	}

	//if remaining element loop and add to the array
	while(j < b_length){
		if(checker(c,a[i],k)){
			c[k++] = b[j++];
			count++;
		}
		else
		{
			j++;
		}
	}
	while(i < a_length){
		if(checker(c,a[i],k)){
			c[k++] = a[i++];
			count++;
		}
		else{
			i++;
		}	

	}

	for(i=0;i<count;i++){
		printf("%d ",c[i]);
	}
}