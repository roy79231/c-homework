#include <stdio.h>

double ans=0;
void add(double a,double b){
	ans = a + b;
	printf(" + ");
}
void sub(double a, double b){
	ans = a - b;
	printf(" - ");
}
void mul(double a, double b){
	ans = a * b;
	printf(" * ");
}
void div(double a, double b){
	ans = a / b;
	printf(" / ");
}

int main(){
	double a;
	double b;
	//void (*p[4])(double,double);
	void (*p[4])(double,double);
	p[0]=&add;
	p[1]=&sub;
	p[2]=&mul;
	p[3]=&div; 
	while(1){
		printf("Enter a number between 0 to 3(+ - * /),-1 to end:");
		int n;scanf("%d",&n);
		if (n==-1){
			printf("Program end!");
			break;
		}
		printf("Input two numbers to do the operand:");
		scanf("%lf %lf",&a,&b);
		printf("%f",a);
		p[n](a,b);
		printf("%f = %f\n",b,ans);
	}
}
