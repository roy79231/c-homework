#include <stdio.h>

int main(){
	int num;
	printf("�п�J�@�Ӿ��(5��ƥH�U):");
	scanf("%d",&num);
	int ks;
	int k;
	int h;
	int t;
	int n;
	int count=0;
	ks = num/10000;
	k = num/1000 - 10*ks;
	h = num/100 -100*ks - 10*k;
	t = num/10 -1000*ks-100*k-10*h;
	n = num%10;
	if (ks == 7){
		count++;
	}
	if (k == 7){
		count++;
	}	
	if (h == 7){
		count++;
	}	
	if (t == 7){
		count++;
	}
	if (n == 7){
		count++;
	}
	printf("��%d��7",count);

}
