#include <stdio.h>

union integar{
	char c[10];
	short s;
	int i;
	long b;
}num;


int main(){
	printf("��J���Ochar ... \n");
	scanf("%s",num.c);
	printf("char:%s\n",num.c);
	printf("short:%d\n",num.s);
	printf("int:%d\n",num.i);
	printf("long:%ld\n",num.b);
	printf("��J���Oshort ... \n");
	scanf("%d",&num.s);
	printf("char:%s\n",num.c);
	printf("short:%d\n",num.s);
	printf("int:%d\n",num.i);
	printf("long:%ld\n",num.b);
	printf("��J���Oint ... \n");
	scanf("%d",&num.i);
	printf("char:%s\n",num.c);
	printf("short:%d\n",num.s);
	printf("int:%d\n",num.i);
	printf("long:%ld\n",num.b);
	printf("��J���Olong ... \n");
	scanf("%ld",&num.b);
	printf("char:%s\n",num.c);
	printf("short:%d\n",num.s);
	printf("int:%d\n",num.i);
	printf("long:%ld\n",num.b);
}
