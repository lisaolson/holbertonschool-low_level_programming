#include <stdio.h>

int main(void)
	{

	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n != 57)
		{
			n++;
			putchar(',');
			putchar(' ');
		}
		else
		{
			n++;
		}
	}
	putchar('\n');
	return (0);
}
