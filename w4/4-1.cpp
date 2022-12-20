#include <stdio.h>

int fibo(int n){
	int count = 0;
	while(1){ 
		if (n == 1){
			count++;
			break;
		}
		else{
			if(n%2==1){
				n = n*3+1;
				count++;
			}
			if(n%2==0){
				n = n/2;
				count++;
			} 
		}
	}
	return count;
}


int main(){
	int n1,n2;
	int counter;
	int big = fibo(10);
	printf("輸入兩個整數(中間請用空格分開):");
	scanf("%d%d",&n1,&n2);
	if (n1>n2){
		counter = n2;
		n2 = n1;
		n1 = counter;
	}
	for(counter = n1; counter<= n2;counter++){
		if (fibo(counter)>big){
			big = fibo(counter);
		}
	}
	printf("max cycle length = %d",big);
	
	
	
} 
