#include <stdio.h>

void example(int n,char A,char B,char C){
	if (n==1){
		printf("�q%c����%c\n",A,C);
	} 
	else{
		example(n-1,A,C,B);
		printf("�q%c����%c\n",A,C);
		example(n-1,B,A,C);
	}
}
int main(){
	int n ;
	printf("�п�Jn:");
	scanf("%d",&n);
	example(n,'A','B','C');

}
