#include "clo.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer dest
 * @src: pointer src
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int c;
int d;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
	_putchar('\n');
}
