#include <stdio.h>

int main(){
	int n;
	printf("�п�J�@�Ӽ�(1~9)");
	scanf("%d",&n);
	int i;
	int j;
	for (i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d*%d=%d ",j,i,j*i); 
		}
		printf("\n");
	}
} 
