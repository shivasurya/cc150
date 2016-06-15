#include<stdio.h>
int hashChecker[10]={0};

int val[9][9] = {
	{1,7,1,5,4,9,6,8,3},
	{6,4,5,8,7,3,2,1,9},
	{3,8,9,2,6,1,7,4,5},
	{4,9,6,3,2,7,8,5,1},
	{8,1,3,4,5,6,9,7,2},
	{2,5,7,1,9,8,4,3,6},
	{9,6,4,7,1,5,2,2,8},
	{7,3,1,6,8,2,5,6,4},
	{5,2,8,9,3,4,1,6,7}
};
int checkForRightToLeftDiagonal(){
	int i=0;
	for(i=0;i<9;i++)
		hashChecker[val[i][8-i]]++;
	for(i=1;i<10;i++){
		if(hashChecker[i]!=1){
			printf("Multiple Value present in Right - Left diagonal row\n");
			return 0;
		}
	}
	return 1;
}
int checkForLeftToRightDiagonal(){
	int i=0;
	for(i=0;i<9;i++){
		hashChecker[val[i][i]]++;
	//	printf("%d %d\n",val[i][i],hashChecker[val[i][i]]);
	}
	for(i=1;i<10;i++){
		if(hashChecker[i]!=1){
			printf("Multiple Value present in Left - Right diagonal row\n");
			return 0;
		}
	}
	return 1;
}
void initializeTheHashChecker(){
	int i=0;
	for(;i<10;i++)
		hashChecker[i]=0;
}
int checkForHorizontal(int rowId){
	int i=0;
	for(i=1;i<10;i++){
		hashChecker[val[rowId][i-1]]++;
		//printf("%d %d\n",val[rowId][i-1],hashChecker[val[rowId][i-1]]);
	}
	for(i=1;i<10;i++){
		if(hashChecker[i]!=1){
			printf("Multiple Value present in Horizontal row\n");
			return 0;
		}
	}
	return 1;	
}
int checkForVertical(int columnId){
	int i=0;
	for(i=1;i<10;i++){
		hashChecker[val[i-1][columnId]]++;
//		printf("%d %d\n",val[i-1][columnId],hashChecker[val[i-1][columnId]]);
	}
	for(i=1;i<10;i++){
		if(hashChecker[i]!=1){
			printf("Multiple Value present in vertical column\n");
			return 0;
		}
	}
	return 1;	
}
int checkForSubMatrix(int columnId,int rowId){
	int i=rowId;
	int j=columnId;
	for(;i<rowId+3;i++){
		for(j=columnId;j<columnId+3;j++){
			hashChecker[val[i][j]]++;
		}
	}
	for(i=1;i<10;i++){
		if(hashChecker[i]!=1){
			printf("Multiple Value present in Sub Matrix\n");
			return 0;
		}
	}
	return 1;		
}
int main(){
	initializeTheHashChecker();
	checkForLeftToRightDiagonal();
	initializeTheHashChecker();
	checkForRightToLeftDiagonal();
	initializeTheHashChecker();
	checkForHorizontal(1);
	initializeTheHashChecker();
	checkForVertical(2);
	initializeTheHashChecker();
	checkForSubMatrix(0,0);
}