#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i=0;
	char in[100];
	while(1){
		if(i==10)break;
		fgets(in,100,stdin);
		if(in[0]=='0')break;
		int x = strlen(in);
		char ans[100]={0};
		int total=0;
		for(int j=0;j<x;j++){
			ans[in[j]-'0']++;//¶×¤J¼Æ¶q 
		}
		for(int j=0;j<100;j++){
			if(ans[j]>=2){
				total += ans[j]-ans[j]%2;
			} 
		} 
		if(total%2 == 0 && total!=x){
			total++;
		} 
		printf("%d\n",total);
		i++; 
	
	}
	
}
