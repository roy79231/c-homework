#include <stdio.h>
#include <stdlib.h>

int main(){
	int counter=0;
	int countcorrect=0 ;
	for(counter = 0;counter<10;counter++){
		int num1;
		int num2;
		num1 = (rand()%9) +1;
		num2 = (rand()%9) +1;
		int total;
		int say;
		int ans;
		say = (rand()%4)+1;
		total = num1*num2;
		printf("How much is %d times %d?",num1,num2);
		scanf("%d",&ans);
		if (ans != total){
			if(say == 1){
				printf("wrong1\n");
			}
			if(say == 2){
				printf("wrong2\n");
			}
			if(say == 3){
				printf("wrong3\n");
			}
			if(say == 4){
				printf("wrong4\n");
			}
		}
		if(ans == total){
			if(say == 1){
				printf("correct1\n");
			}
			if(say == 2){
				printf("correct2\n");
			}
			if(say == 3){
				printf("correct3\n");
			}
			if(say == 4){
				printf("correct4\n");
			}
		countcorrect++;
		}
		
		
		
		
		}
		int cor;//µª¹ï²v
		cor = countcorrect*10;
		printf("accuracy=%d% \n",cor);
		if(cor > 75){
			printf("u r great");
		}
		else{
			printf("u r such a shit");
		}

	
	} 
