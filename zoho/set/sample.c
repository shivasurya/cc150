#include<stdio.h>

int skip(int arr[],int elem,int size,int index){
		while(index < size && elem == arr[index]){
			index++;
		}
		return index;
	
}
int main(){
	int a[] = {1,2,3,4,5};
	int b[] = {1,3,5,7,9,11,12,13,13,15};
	int c[100]={0};
	int i=0;
	int k=0;
	int j=0;
	int count=0;
	int a_length = 5;
	int b_length = 10;
	//lets keep static length for now
	while((i<a_length) && (j<b_length)){
		if(a[i] < b[j]){
			c[k] = a[i];		
			i = skip(a,a[i],a_length,i);
		}
		else if(a[i] == b[j]){
			c[k] = a[i];
			

		
			i = skip(a,a[i],a_length,i);
			j = skip(b,b[j],b_length,j);
			
		}
		else{
			c[k] = b[j];

			j = skip(b,b[j],b_length,j);
		}
		k++;
		count++;
	}

	//if remaining element loop and add to the array
	while(j < b_length){
		c[k] = b[j];
		j = skip(b,b[j],b_length,j);
		k++;
		count++;
	}
	while(i < a_length){
		c[k] = a[i];
		i = skip(a,a[i],a_length,i);
		k++;
		count++;
	}
	printf("\n");
	for(i=0;i<count;i++){
		printf("%d ",c[i]);
	}
}