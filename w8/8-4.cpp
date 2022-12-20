#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 

char in[100];
int len;
int x=0;

bool verify(char *temp,int len_temp){
	int cnt=0;
	for(int i=0;i<=len-len_temp;i++){
		bool flag=1;
		for(int j=0;j<len_temp;j++){
			if(temp[j]!=in[i+j]){
				flag=0;
				break;
			}
		}
		if(flag)cnt++;
	}
	if(cnt==1)return 1;
	return 0;
}
int main(){
	while(1){
		if(x==10)break;
		fgets(in,100,stdin);
		len = strlen(in);
		len--;
		if(in[0]=='0' && len==1)break;
		bool flag=0;
		for(int i=2;i<=len;i++){
			char temp[i];
			for(int j=0;j<=len-i;j++){
				for(int k=0;k<i;k++)temp[k]=in[j+k];
				if(verify(temp,i)){
					flag=1;
					break;
				}
			}
			if(flag){
				printf("%d\n",i);
				break;
			}
		}
		x++;
	}
}
