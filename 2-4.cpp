#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("�п�J�@�Ӿ��:");
	scanf("%d",&n);
	if (n%2 == 0){
		printf("%.0f",pow(n,2));
	}
	else{
		printf("%.0f",pow(n,3));
	}
}
