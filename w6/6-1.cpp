#include <stdio.h>

int main(){
	const long long max = 1 << 10;
	int num[max] = {0};
	int i=0;
	int k;
	int times[10]={0};
	while (scanf("%d",&num[i])!=EOF){
		int time = num[i];
		times[time]++;
		i++;
	}
	for(k=0;k<=i;k++){
		int time= num[k];
		if(times[time]!=0){
			printf("%d %d\n",num[k],times[time]);
			times[time]=0;
		}
	}
}
