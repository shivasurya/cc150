#include <stdio.h>
int main(){
	int i=0;
	int m,n;
	int start_row,start_col;
	int starter = 0;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&start_col);
	scanf("%d",&start_row);
	int a[m][n];
	int j=0;
	int alter_col = 0;
	if(start_row == m-1 && start_col == 0){
		starter = m;
	}
	else if(start_row >= 0 && start_col > 0){
		if(start_col%2 != 0)
			starter = (m*start_col)+1;
		else
			starter = (m*start_col);
	}
	if(start_row == m-1)
		alter_col = starter+1;
	else
		alter_col = starter+9;

	for(i=0;i<n;i++){
		if(i%2==0){
			int temper = starter;
			for(j=0;j<m;j++){
				a[j][i] = temper;
				temper--;
			}
			starter = starter+10;
		}
		else{
			int temper = alter_col;
			for(j=0;j<m;j++){
				a[j][i] = temper;
				temper++;
			}
			alter_col = alter_col+10;	
		}
	}
	for (i = 0; i < m; i++)
	{	
		for (j = 0; j < n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}