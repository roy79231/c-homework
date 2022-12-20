#include <stdio.h>

int main(){
	char in[10];
	scanf("%s",in);
	printf("\"%s\"\n",in);
	printf("\\%20s\\\n",in);
	printf("\\%-20s\\",in);
} 
