#include "clo.h"

/**
 * string_toupper - turns all lowercase letters to uppercase
 * @p: char
 * Return: Always 0.
 */
char *string_toupper(char *p)
{
int c;

	c = 0;
	while (p[c] != '\0')
	{
		if (p[c] >= 'a' && p[c] <= 'z')
		{
			p[c] -= 32;
		}
	c++;
	}
	return (p);
}
