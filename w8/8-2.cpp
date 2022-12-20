#include <stdio.h>
#include <ctype.h>

int main(){
	char data[100];
	int ans[10]={0};
	int i=0;
	int c=0;
	int count=0;
	while(1){
		fgets(data,100,stdin);
		if (data[0]=='0') break;
		while(data[i]!= '\0'){
			if(data[i]==' '|| data[i]=='\n'){
				count++;
				if(!isalpha(data[i+1])){
				count--;
				}
			}
			i++;
		}
		ans[c] = count+1 ;
		c++;
		count = 0;
		i = 0;
	}
	for(int j=0;j<10;j++){
		if(ans[j]==0)break;
		printf("%d\n",ans[j]);
	}

} 
// Shsssssssh .... I AM HUNTING QHHIIO. HEH HEH HEH HEH
