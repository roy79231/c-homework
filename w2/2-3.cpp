#include <stdio.h>

int main(){
	int t;
	printf("�п�J�ɶ�(��쬰��):");
	scanf("%d",&t);
	int h;
	int m;
	int s;
	h = t/3600;
	m = (t - 3600*h)/60;
	s = (t - 3600*h)%60;
	printf("%d:%d:%d",h,m,s);
}
