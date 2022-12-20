#include <stdio.h>


int main(){
	char n1;
	int n2;
	printf("輸入產品編號及銷售量(請用空格隔開):");
	scanf("%c%d",&n1,&n2); 
	//printf("銷售額 = %d",n2);
	switch(n1){
		case'1':
			printf("銷售額 = %.2f",2.98*n2);
			break;
		case'2':
			printf("銷售額 = %.2f",4.50*n2);
			break;	
		case'3':
			printf("銷售額 = %.2f",9.98*n2);
			break;
		case'4':
			printf("銷售額 = %.2f",4.49*n2);
			break;
		case'5':
			printf("銷售額 = %.2f",6.87*n2);
			break;
	}




}
