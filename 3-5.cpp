#include <stdio.h>

int main(){
	int num;
	printf("��J:num=");
	scanf("%d",&num);
	int count=0;
	while(1){
		if(num%2 == 0){
			num = num/2;
			count++;
		}
		if(num%2 == 1){
			num = num-1;
			count++;
		}
		if(num == 0){
			break;
		}
	}
	printf("��X:%d",count);
}
