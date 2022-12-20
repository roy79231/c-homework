#include <stdio.h>

int main(){
	float f;
	float c;
	printf("please input the temperature(Fahrenheit):");
	scanf("%f",&f);
	c = 5*(f-32)/9;
	printf("%+10.3f¢XF\n",f);
	printf("%+10.3f¢XC",c);
}
