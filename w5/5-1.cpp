#include <stdio.h>

int fibo(int n){
	int x;
	if (n <= 1){
		return n;
	}
	else{
		x = fibo(n-1) + fibo(n-2);
		return x;
	}
}

int main(){
	int y;
	printf("Enter an integer:");
	scanf("%d",&y);
	printf("Fibonacci(%d)=%d",y,fibo(y));
}
