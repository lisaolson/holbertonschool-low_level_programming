#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
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
