#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: Sets pointer as s
 * Return: Always 0.
 */
void print_rev(char *s)
{
int len;
int i;

len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
i = len;
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
