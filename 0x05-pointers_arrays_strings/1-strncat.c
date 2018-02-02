#include "holberton.h"

/**
 * *_strncat - concatenates two strings with n bytes
 * @dest: pointer dest
 * @src: pointer src
 * @n: int n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int c;
int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0' && d < n)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
	_putchar('\n');
}
