#include "clo.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer s
 * @c: char varaible c
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
	}
	return ('\0');
}
