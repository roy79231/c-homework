#include <stdio.h>


int main(){
	char n1;
	int n2;
	printf("��J���~�s���ξP��q(�ХΪŮ�j�}):");
	scanf("%c%d",&n1,&n2); 
	//printf("�P���B = %d",n2);
	switch(n1){
		case'1':
			printf("�P���B = %.2f",2.98*n2);
			break;
		case'2':
			printf("�P���B = %.2f",4.50*n2);
			break;	
		case'3':
			printf("�P���B = %.2f",9.98*n2);
			break;
		case'4':
			printf("�P���B = %.2f",4.49*n2);
			break;
		case'5':
			printf("�P���B = %.2f",6.87*n2);
			break;
	}




}
