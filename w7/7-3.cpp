#include <stdio.h>

int swap(int *ptr1,int *ptr2){
	int hold = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = hold;
}

int main(){
	int a;
	int b;
	printf("Please input two numbers...\n");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	int *ptr1 = &a;
	int *ptr2 = &b;
	swap(&a,&b);
	printf("after swap,\n");
	printf("a=%d b=%d",a,b);
} 
