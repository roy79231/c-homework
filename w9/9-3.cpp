#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	num--;
	char in[2];
	int row = (num/702)+ 1;
	int col = (num%702)+ 1;
	if(col<=26){
		col += 16;
		in[0]= col + '0';
		printf("%d-%c",row,in[0]);
	}
	else{
		col--;
		int x = (col/26) - 1;
		int y = (col%26) ;
		x += 17;
		y += 17;
		in[0]= x + '0';
		in[1]= y + '0';
		printf("%d-%c%c",row,in[0],in[1]);
	}
}
