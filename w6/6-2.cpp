#include <stdio.h>

int testPalindrome(char word[]){
	int count = 0;
	int detect = 0;
	for(int i=0 ; word[i]!= '\0' ;i++){
		count++;
	}
	for(int k=0;k<count/2;k++){
		if (word[k] != word[count-1-k]){
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
	scanf("%19s",&word);
	printf("%d",testPalindrome(word));
	
	
	
}
