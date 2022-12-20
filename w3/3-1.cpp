#include <stdio.h>

int main(){
	float num;
	while(1){
		printf("Enter sale in dollars(-1 to end):");
		scanf("%f",&num);
		if (num == -1){
			break;
		}
		else{
			float s;
			s = 200 + num*0.09;
			printf("Salary is:%.2f\n",s);
			
		}
	
	
	
	
	
	
	
	
	
	
	}
}	 
