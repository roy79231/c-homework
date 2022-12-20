#include <stdio.h>

int main(){
	int side1;
	int side2;
	int side3;
	int total;
	printf("Enter side 1:");
	scanf("%d",&side1);
	printf("Enter side 2:");
	scanf("%d",&side2);
	printf("Enter side 3:");
	scanf("%d",&side3);
	if (side3>=side2 && side3 >=side1){
		total = side2*side2+side1*side1;
		if(side3*side3 == total){
			printf("The numbers make a right triangle.");
		}
		else{
			printf("The numbers dont make a right triangle.");
		}
	}
	if (side2>=side3 && side2 >=side1){
		total = side3*side3+side1*side1;
		if(side2*side2 == total){
			printf("The numbers make a right triangle.");
		}
		else{
			printf("The numbers dont make a right triangle.");
		}		
	}	
	if (side1>=side2 && side1 >= side3){
		total = side2*side2+side3*side3;
		if(side1*side1 == total){
			printf("The numbers make a right triangle.");
		}
		if(side1*side1 != total){
			printf("The numbers dont make a right triangle.");
		}

	}
	


} 
