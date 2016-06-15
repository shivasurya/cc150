#include<stdio.h>
struct date{
	int date;
	int month;
	int year;
};

struct date val[] = {{20,  1, 2014},
                    {25,  3, 2010},
                    { 3, 12, 2001},
                    {18, 11, 2001},
                    {1,  1, 1953},
                    {20,  4, 4045},
                    {21,  5, 2015},
                    {19,  4, 2016},
                    {19,  4, 2020},
                    { 9,  7, 3030}};

void sortday(){
	int i=0;
	struct date temp[10];
	int count[31]={0};
	for(i=0;i<10;i++){
		count[val[i].date]++;
	}
	for(i=1;i<31;i++){
		count[i] = count[i] + count[i-1];
	}
	for(i=9;i>=0;i--){
		temp[count[val[i].date - 1]-1] = val[i];
		count[val[i].date - 1]--;
	}
	for(i=0;i<10;i++){}
		val[i] = temp[i];
}
void sortMonth(){
	struct date temp[10];
	int count[12]={0};
	int i=0;
	for(;i<10;i++){
		count[val[i].month-1]++;
	}
	for(i=1;i<12;i++){
		count[i] += count[i-1];
	}
	for(i=9;i>=0;i--){
		temp[count[val[i].month - 1]-1] = val[i];
		count[val[i].month - 1]--;
	}
	for(i=0;i<10;i++)
		val[i] = temp[i];

}
void sortYear(){
	struct date temp[10];
	int count[5000]={0};
	int i=0;
	for(;i<10;i++){
		count[val[i].year]++;
	}
	for(i=1;i<5000;i++){
		count[i] += count[i-1];
	}
	for(i=9;i>=0;i--){
		temp[count[(val[i].year)]-1] = val[i];
		count[(val[i].year)]--;
	}
	for(i=0;i<10;i++)
		val[i] = temp[i];

}

void sort(){
	sortday();
	sortMonth();
	sortYear();
}
int main(){
	int i=0;
	sort();
	for(;i<10;i++){
		printf("%d %d %d\n",val[i].date,val[i].month,val[i].year);
	}
	return 0;
}