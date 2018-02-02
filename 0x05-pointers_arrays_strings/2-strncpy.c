#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer dest
 * @src: pointer src
 * @n: integer n
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int c;
	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		for (; c < n; c++)
		{
			dest[c] = '\0';
		}
		c++;
	}
	return (dest);
}
