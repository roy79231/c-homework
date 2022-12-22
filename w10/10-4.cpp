#include <stdio.h>

unsigned int power2(int num,int pow){
	for(int i = 1;i<=pow;i++){
		num = num << 1;
	}
	return num;
}
void displaybits(unsigned int x){
	unsigned int max = 1<< 31;
	printf("%7d = ",x);
	
	for(int i=1;i<=32;i++){
		putchar(x&max?'1':'0');
		x = x << 1;
		if(i%8 == 0){
			putchar(' ');
		}
	}
	printf("\n");
}

int main(){
	int num,pow;
	printf("Please input num and pow ... \n");
	scanf("%d %d",&num,&pow);
	displaybits(num); 
	displaybits(power2(num,pow));
}
