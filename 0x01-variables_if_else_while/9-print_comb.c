#include <stdio.h>

int main(void) {
	
	int n = 48;

	while ( n < 57 ) {
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('9');
	putchar('\n');
	return 0;
}
