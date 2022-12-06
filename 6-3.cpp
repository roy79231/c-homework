#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	const long long max= 1 <<10;
	int num[max];
	int times[max]={0};
	int i=0;
	while(scanf("%d",&num[i])!=EOF){
		int time = num[i];
		times[time]++;
		i++; 
	}
	int average;
	int total = 0;
	for(int k=0;k<i;k++){
		total = total + num[k];
	}
	average = total / i; //平均 
	
	int big=0;
	int record=0;
	for(int k=0;k<i;k++){
		int time = num[k];
		if(times[time]>big){
			big = times[time];
			record = num[k];
		} 
	}
	
	int mid;
	if(i%2 == 0){
		mid =(num[i/2]+num[(i/2)-1])/2;
	}
	if(i%2 == 1){
		mid = num[(i/2)];
	}
	printf("平均數:%d\n",average);
	printf("中位數:%d\n",mid);
	printf("眾數:%d",record);

}
