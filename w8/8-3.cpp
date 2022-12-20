#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int k;
	char in[100];
	int div;
	int reg;//暫存 
	while(1){
		scanf("%d",&k);
		if(k==0)break;
		fgets(in,100,stdin);
		int size = strlen(in)-1;
		for(int s=1;s<=size;s++){
			in[s-1]=in[s];
		}
		div = size/k;
		for(int i=0;i<size;i+=k){ //第幾段 
			for(int j=0;j<k/2;j++){//一段裡的排列
				reg = in[i+j];
				in[i+j] = in[i-j+k-1];
				in[i+k-j-1] = reg;
			}	 
		}
		printf("%s",in);
	}
}
