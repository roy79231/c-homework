#include <stdio.h>


int main(){
	char num;
	printf("�п�J�~��N�X:");
	scanf("%c",&num);
	int num2;
	int num3;
	int money;
	float total; 
	switch(num){
		case'1':
			printf("�п�J�T�w�g�~:");
			scanf("%d",&num2);
			total = (float)num2;
			printf("�Ӹg�z�H���g�~��%.2f",total);
			break;
		case'2':
			printf("�п�J�C�g�u�@�ɼ�:");
			scanf("%d",&num2);
			printf("�п�J�C�p�ɤu��:");
			scanf("%d",&money);
			total = money * num2;
			printf("�Ӯ��~�u���g�~��:%.2f",total);
			break;
		case'3':
			printf("�п�J��Ī��u��g�P����B:");
			scanf("%d",&num2);
			total = 250 + (float)num2 * 0.057;
			printf("�ө�Ī��u�g�~��:%.2f",total);
			break;
		case'4':
			printf("�п�J�s�u��g�Ͳ������:");
			scanf("%d",&num2);
			printf("�п�J�C�󪺭p�S:");
			scanf("%d",&money);
			total = num2 * (float)money ;
			printf("�ӹs�u���g�~��:%.2f",total);
			break;

		}
	
	
} 
