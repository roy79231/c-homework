#include <stdio.h>

struct time{
	int hour;
	int minutes;
	double second;
}start,end,elapse;

int main(){
	start = {12,32,25.49};
	end = {15,12,17.53};
	if(end.second<start.second){
		end.minutes--;
		end.second +=60;
	}
	elapse.second = end.second-start.second;
	if(end.minutes<start.second){
		end.hour--;
		end.minutes+=60;
	}
	elapse.minutes= end.minutes-start.minutes;
	elapse.hour=end.hour-start.hour;
	printf("%02d:%02d:%.2f",elapse.hour,elapse.minutes,elapse.second);
}
