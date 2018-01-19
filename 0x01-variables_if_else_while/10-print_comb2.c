#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {

        int n = 48;
	int ntwo = 48;

        while (n < 58) {
		while (ntwo < 58) {
		putchar(n);
		putchar(ntwo);
		n++;
		ntwo++;
                	if(n!=57 && ntwo!=57)
                	{
                        	putchar(',');
                        	putchar(' ');
                	} else {
			n++;
			ntwo++;
			}
		}
		if (n!=57 && ntwo!=57) {
			n++;
			ntwo++;	
		}		
	}
        putchar('\n');
        return 0;
}
