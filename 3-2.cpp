#include <stdio.h>

int main(){
	int num;
	printf("請輸入一個整數:");
	scanf("%d",&num);
	int i;
	int count;
	count = 0;
	for (i=2;i<num;i++){
		if(num%i == 0){
			count++;
		}
	}
	if(count == 0){
		printf("%d是質數",num);
	}
	else{
		printf("%d不是質數",num);
	}
}
