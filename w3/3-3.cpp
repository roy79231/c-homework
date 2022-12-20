#include <stdio.h>

int main(){
	int i;
	int j;
	int k;
	int n;
	printf("請輸入菱形邊長:");
	scanf("%d",&n);
	for (i=1;i<=2*n-1;i++){
		if(i<=n){
			for(j=1;j<=n-i;j++){
				printf(" ");
			}
			for(k=1;k<=2*i-1;k++){
				printf("*");
			}
			printf("\n");
		}
		else{
			for(j=1;j<=i-n;j++){
				printf(" ");
			}
			for(k=1;k <=4*n-2*i-1;k++){
				printf("*");
			}
			printf("\n");
		}
	}
}
