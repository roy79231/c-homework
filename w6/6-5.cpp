#include <stdio.h>

int main(){
	int i;
	int count = 1;
	int counter[10]={0};
	while(i!=0){
		scanf("%d",&i);
		if(i==0)break;
		int k=0;
		int num[i];
		while(k<i){
			scanf("%d",&num[k]);
			k++;
		}
		int average=0;
		for(int m=0;m<k;m++){
			average = average + num[m];
		}
		average = average/k;
		int total=0;
		for(int m=0;m<k;m++){
			if(average > num[m]){
				total = (average-num[m]) +total;
			}
			else{
				total = (num[m]-average)+total;
			}
		}
		int move = total/2;
		counter[count]=move;
		count++;
	}
	for(int x=1;x<count;x++){
		printf("Set #%d\n",x);
		printf("The smallest move is %d\n",counter[x]);
	}
}
