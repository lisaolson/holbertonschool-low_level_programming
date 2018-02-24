#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a string
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%s", va_arg(ap, char*));
		}
		if (i == 0)
		{
			printf("%s", va_arg(ap, char*)); 
		}
		else
		{
			printf("%s%s", separator, va_arg(ap, char*));
		}
	}
	va_end(ap);
	putchar('\n');
}
