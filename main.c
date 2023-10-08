#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec,m,s;
	
	printf("input the second: ");
	scanf("%d",&sec);
	
	m=sec/60;
	s=sec%60;
	
	printf("the time is %d : %d",m,s);
	
	return 0;
}
