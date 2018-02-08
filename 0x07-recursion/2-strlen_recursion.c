#include "holberton.h"
/**
 * _strlen_recursion - returns length of string
 * @s: pointer s
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int total = 1;

	if (*s != '\0')
		total += _strlen_recursion(s + 1);
	if (*s == '\0')
		return (total - 1);
	return (total);
}
