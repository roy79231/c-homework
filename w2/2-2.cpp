#include <stdio.h>

int main(){
	int n;
	printf("請輸入五位數:");
	scanf("%d",&n);
	int a;
	int b;
	int c;
	int d;
	int e;
	a = n/10000;
	b = n/1000 - a*10;
	c = n/100 -a*100- b*10;
	d = n/10 -a*1000 - b*100 -c*10;
	e = n-a*10000 - b*1000 - c*100 - d*10;
	printf("%d %d %d %d %d",a,b,c,d,e);
}
