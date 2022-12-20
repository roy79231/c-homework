#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	printf("enter three different integers:");
	scanf("%d%d%d",&a,&b,&c);
	int sum;
	float average;
	int product;
	int smallest;
	int largest;
	int max;
	int min;
	sum = a + b + c ;
	average =(float)sum /3;
	product = a*b*c;
	max = a;
	if (b> max){
		max = b;
	}
	if (c> max){
		max = c;
	}
	min = a;
	if (b<min){
		min = b;
	}
	if(c< min){
		min = c;
	}
	
	printf("Sum is %d\n",sum);
	printf("Average is %.2f\n",average);
	printf("Product is %d\n",product);
	printf("Smallest is %d\n",min);
	printf("Biggest is %d\n",max);
} 
