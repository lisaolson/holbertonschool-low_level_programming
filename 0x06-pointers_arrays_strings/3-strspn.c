#include "clo.h"
/**
 * _strspn - finds length of a prefix substring
 * @s: pointer s
 * @accept: pointer accept
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int total, i, j;
total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				total++;

			if (s[i] == ',' ||
				s[i] == ' ')
				return (total);
		}
	}

	return (total);
}
