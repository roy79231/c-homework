#include <stdio.h>

int main(){
	int num;
	printf("�п�J�@�Ӿ��:");
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
		printf("%d�O���",num);
	}
	else{
		printf("%d���O���",num);
	}
}
