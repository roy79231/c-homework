#include <stdio.h>


int main(){
	char num;
	printf("請輸入薪資代碼:");
	scanf("%c",&num);
	int num2;
	int num3;
	int money;
	float total; 
	switch(num){
		case'1':
			printf("請輸入固定週薪:");
			scanf("%d",&num2);
			total = (float)num2;
			printf("該經理人員週薪為%.2f",total);
			break;
		case'2':
			printf("請輸入每週工作時數:");
			scanf("%d",&num2);
			printf("請輸入每小時工資:");
			scanf("%d",&money);
			total = money * num2;
			printf("該時薪工的週薪為:%.2f",total);
			break;
		case'3':
			printf("請輸入抽傭金工當週銷售金額:");
			scanf("%d",&num2);
			total = 250 + (float)num2 * 0.057;
			printf("該抽傭金工週薪為:%.2f",total);
			break;
		case'4':
			printf("請輸入零工當週生產的件數:");
			scanf("%d",&num2);
			printf("請輸入每件的計酬:");
			scanf("%d",&money);
			total = num2 * (float)money ;
			printf("該零工的週薪為:%.2f",total);
			break;

		}
	
	
} 
