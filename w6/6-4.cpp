#include <stdio.h>

int main(){
	const long long max = 1 <<10;
	int i=0;
	int num[max];
	while(scanf("%d",&num[i])!=EOF){
		i++;
	}
	for(int k = 0; k < i-1;k++){ //氣泡 
		for(int j = 1;j<i;j++){
			if(num[j-1]>num[j]){ 
				int host = num[j-1];
				num[j-1] = num[j];
				num[j] = host;
			} 
			else{
				continue;
			}
		}
	}
	int count = i;
	for(int k=0;k<i;k++){ //清重複 
		int wait=num[k];
		for(int j=k+1;j<i;j++){
			if(wait == num[j] && wait!=100){
				num[j]=100;
				count--;
			}
		}
	}
	
	for(int k = 0; k < i-1;k++){ //氣泡again 
		for(int j = 1;j<i;j++){
			if(num[j-1]>num[j]){ 
				int host = num[j-1];
				num[j-1] = num[j];
				num[j] = host;
			} 
			else{
				continue;
			}
		}
	}
	printf("[%d",num[0]);
	for(int k = 1;k<count;k++){
		printf(", %d",num[k]);
	}
	printf("]");
}
