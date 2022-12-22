#include <stdio.h>

struct healthprofile{
	char lastname[10];
	char firstname[10];
	char *sex;
	int year;
	int month;
	int day;
	double height;
	double weight;
}person;

double bmicount(double h,double w){
	h = h/100;
	double count = w/(h*h);
	return count;  
}

int main(){
	int sex; 
	printf("Please input your lastname\n");
	scanf("%s", person.lastname);
	printf("Please input your firstname\n");
	scanf("%s", person.firstname);
	printf("Please input your sex(0 for male/1 for female)\n");
	scanf("%d",&sex);
	if(sex==1)person.sex="female";
	if(sex==0)person.sex="male";
	printf("Please input your birthday year\n");
	scanf("%d",&person.year);
	printf("Please input your birthday month\n");
	scanf("%d",&person.month);
	printf("Please input your birthday day\n");
	scanf("%d",&person.day);
	printf("Please input your height\n");
	scanf("%lf",&person.height);
	printf("Please input your weight\n");
	scanf("%lf",&person.weight);
	printf("Lastname: %s Firstname: %s\n",person.lastname,person.firstname);
	printf("Sex:%s\n",person.sex);
	printf("Birthday:%04d/%02d/%02d\n",person.year,person.month,person.day);
	printf("Height:%.2f Weight:%.2f\n",person.height,person.weight);
	printf("BMI:%f",bmicount(person.height,person.weight));
	
	
}
