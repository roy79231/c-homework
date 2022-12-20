#include <stdio.h>

int main(){
	int year;
	int month;
	int m1=31;
	int m2=28;
	int m3=31;
	int m4=30;
	int m5=31;
	int m6=30;
	int m7=31;
	int m8=31;
	int m9=30;
	int m10=31;
	int m11=30;
	int m12=31;
	int day;
	printf("Please input year,month,day\n");
	scanf("%d%d%d",&year,&month,&day);

	switch(month){
		case 1:
			break;
		case 2:
			day = day + m1;
			break;
		case 3:
			day = day + m1+ m2;
			break;
		case 4:
			day = day + m1 + m2 + m3;
			break;
		case 5 :
			day = day + m1+ m2+ m3+ m4;
			break;	
		case 6:
			day = day + m1+ m2+ m3+ m4+ m5;
			break;
		case 7:
			day = day + m1+ m2+ m3+ m4+ m5+ m6;
			break;	
		case 8:
			day = day + m1+ m2+ m3+ m4+ m5+ m6+ m7;
			break;		
		case 9:
			day = day + m1+ m2+ m3+ m4+ m5+ m6+ m7+ m8;
			break;	
		case 10:
			day = day + m1+ m2+ m3+ m4+ m5+ m6+ m7+ m8+ m9;
			break;	
		case 11:
			day = day + m1+ m2+ m3+ m4+ m5+ m6+ m7+ m8+ m9+ m10;
			break;	
		case 12:
			day = day + m1+ m2+ m3+ m4+ m5+ m6+ m7+ m8+ m9+ m10+ m11;
			break;	
	}
	if(year%4 == 0 && month>2){
		day++;
	}
	printf("It is the %d th day",day);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
