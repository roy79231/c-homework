#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	char in[100];
	int ans[100]={0};
	while(1){
		if(i==n+1)break;
		fgets(in,100,stdin);
		int len=strlen(in);
		for(int j=0;j<len;j++){
			in[j]=toupper(in[j]);
		}
		for(int j=0;j<len;j++){
			if(isalpha(in[j])){
				ans[in[j]-'0']++;
			}
		}
		i++;	
	}
	for(int m=100;m>0;m--){
		for(int f=17;f<=42;f++){
			if(ans[f]>m){
				printf("%c %d\n",f+'0',ans[f]);
				ans[f]=0;
			}
		}
	}
}
