#include <stdio.h>

int main(void) {

        int n = 48;
	int ntwo = 48;

        while (n < 58) {
		while (ntwo < 58) {
		putchar(n);
		putchar(ntwo);
		n++;
		ntwo++;
                	if(n!=57)
                	{
                        	putchar(',');
                        	putchar(' ');
                	}
		}		
	}
        putchar('\n');
        return 0;
}
