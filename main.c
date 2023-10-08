#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int time,hour,minute,second;
	
	printf("input the second: ");
	scanf("%d",&time);
	
	hour=time/3600;
	minute=(time%3600)/60;
	second=time%60;
	
	printf("The time for %d second is %d : %d : %d",time,hour,minute,second);
	return 0;
}
