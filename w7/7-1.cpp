#include <stdio.h>

int main(){
	int k = 10;
	int *ptr2=&k;
	int arr[5]={31,17,33,22,16};
	for(int i=0;i<5;i++){
		int *ptr = &(arr[i]);
		*ptr += *ptr2;
		printf("%d\n",*ptr);
	}
} 
