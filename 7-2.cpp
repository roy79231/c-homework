#include <stdio.h>

int main(){
	int a = 28;
	int b = 16;
	int *ptr1,*ptr2;
	ptr1 = &a;
	ptr2 = &b;
	a = 14;
	printf("%p\n",&a);
	*ptr2 = 8;
	printf("%d\n",b);	
	ptr2 = ptr1;
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%d\n",*ptr2);
	printf("%d\n",*ptr1);
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%p",&b);
}
