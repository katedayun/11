#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *pc;
	int *pi;
	double *pd;
	
	pc =(char*)10000;
	pi =(int*)10000;
	pd =(double*)10000;
	
	printf("증가전: pc=%p, pi=%p, pd=%p",pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	
	printf("증가후 : pc=%p, pi=%p, pd=%p",pc, pi, pd); 
	system("PAUSE");
	return 0;
}

