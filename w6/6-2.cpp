#include <stdio.h>
#include <ctype.h>
int testPalindrome(char *word){
	int count = 0;
	int detect = 0;
	char ans[10];
	for(int i=0 ; word[i]!= '\0' ;i++){
		if(isalpha(word[i]) && word[i]!=' '){
			ans[count]= word[i];
			count++;	
		}
	}
	for(int k=0;k<count/2;k++){
		if (ans[k] != ans[count-1-k]){
			detect++;
		}
	}	
	if(detect!=0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	char word[20];
	fgets(word,20,stdin);
	printf("%d",testPalindrome(word));
	
	
	
}
