#include <stdio.h>

struct date{
	int year;
	int month;
	int day;
}holiday,festival;

int main(){
	holiday = {2004,4,26};
	int y,m,d;
	scanf("%d",&y);
	scanf("%d",&m);
	scanf("%d",&d);
	festival= {y,m,d};
	printf("%02d/%02d/%d\n",holiday.month,holiday.day,holiday.year);
	printf("%02d/%02d/%d\n",festival.month,festival.day,festival.year);
}
