#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: S pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
int length;
length = 0;
	while (*(s++))
	{
		length++;
	}
	return (length);
}
