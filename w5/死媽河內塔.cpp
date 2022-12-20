#include <stdio.h>

void example(int n,char A,char B,char C){
	if (n==1){
		printf("從%c移到%c\n",A,C);
	} 
	else{
		example(n-1,A,C,B);
		printf("從%c移到%c\n",A,C);
		example(n-1,B,A,C);
	}
}
int main(){
	int n ;
	printf("請輸入n:");
	scanf("%d",&n);
	example(n,'A','B','C');

}
