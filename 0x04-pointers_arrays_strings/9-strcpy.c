#include "holberton.h"

/**
 * *_strcpy - copies string to buffer dest
 * @dest: pointer dest
 * @src: pointer src
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int c;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
	dest = '\0';
}
