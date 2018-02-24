#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of expected parameters
 * Return: sum of integers
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
