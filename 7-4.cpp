#include <stdio.h>

int Sumtwoarray(int *arr1,int *arr2){
	int sum = 0;
	for (int i=0;i<3;i++){
		sum += *arr1;
		sum += *arr2;
		arr1++;
		arr2++;
	}
	return sum;
}

int main(){
	printf("Enter the first array(3):");
	int arr1[3]={0};
	int arr2[3]={0};
	for (int i=0;i<3;i++){
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter the second array(3):");
	for (int i =0;i<3;i++){
		scanf("%d",&arr2[i]);
	}
	int total = Sumtwoarray(arr1,arr2);
	printf("The sum of array is %d",total);
} 
