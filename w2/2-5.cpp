#include <stdio.h>
#include <math.h>

int main(){
	float h;
	int w;
	printf("��J�魫(����)");
	scanf("%d",&w);
	printf("��J����(����)");
	scanf("%f",&h);
	float bmi;
	bmi = w/pow(h,2);
	if (30 >=bmi && bmi >=18.5){
		printf("%f",bmi);	
	}
	if(bmi>30){
		printf("%f�A�L��",bmi);	
	}
	if(bmi<18.5){ 
		printf("%f�A�L��",bmi);	
	}
}
