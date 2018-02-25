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
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);

		if (string == NULL)
			string = "(nil)";

		if (separator == NULL)
			printf("%s", string);
		if (i == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	va_end(ap);
	putchar('\n');
}
