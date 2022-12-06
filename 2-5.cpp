#include <stdio.h>
#include <math.h>

int main(){
	float h;
	int w;
	printf("輸入體重(公斤)");
	scanf("%d",&w);
	printf("輸入身高(公尺)");
	scanf("%f",&h);
	float bmi;
	bmi = w/pow(h,2);
	if (30 >=bmi && bmi >=18.5){
		printf("%f",bmi);	
	}
	if(bmi>30){
		printf("%f，過重",bmi);	
	}
	if(bmi<18.5){ 
		printf("%f，過輕",bmi);	
	}
}
