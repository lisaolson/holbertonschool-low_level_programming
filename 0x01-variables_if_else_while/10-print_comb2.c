#include <stdio.h>

int main(void) 

{
	int n = 48;
		
	while ( n < 58 ) {
		putchar(n);
		n++;
		putchar(',');
		putchar(' ');
	}
	putchar('0');
	putchar('\n');
	return 0;

}
