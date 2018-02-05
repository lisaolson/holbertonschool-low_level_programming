#include "holberton.h"
/**
 * *_memcpy - copy n bytes from memory area
 * @dest: pointer dest
 * @src: pointer src
 * @n: unsigned int n
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
