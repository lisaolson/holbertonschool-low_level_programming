#include "holberton.h"
/**
 * *_strpbrk - searches string for any set of bytes
 * @s: pointer s variable
 * @accept: pointer accept variable
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
	return ('\0');

}
