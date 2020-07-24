#include "clo.h"

/**
 * puts_half - print second half of the string
 * @str: pointer str variable
 * Return: Always 0.
 */
void puts_half(char *str)
{
int len;
int start;
	for (len = 0; str[len] != '\0'; len++)
	{}
	if (len % 2 != 0)
	{
		start = (len + 1) / 2;
	}
	else
	{
		start = len / 2;
	}
	for (; start < len; start++)
	{
		_putchar(str[start]);
	}
	_putchar('\n');
}
