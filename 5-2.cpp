#include <stdio.h>

int main(){
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	int i;
	int count=0;
	int j;
	j = n;
	while(1){
		for(i=2;i < n;i++){
			if(j%i == 0){	
				while(j%i == 0){
				j = j/i;
				}
				count++;
			}
		}
		break;
	}
	if(count == 0){
		count++;
	}
	printf("count:%d",count);
}
