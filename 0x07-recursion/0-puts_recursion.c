#include "clo.h"
/**
 * _puts_recursion - print a string using recursion
 * @s: string pointing to s
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
