#include "clo.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: pointer s
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' ||
		s[i] == '\t' ||
		s[i] == '\n' ||
		s[i] == ',' ||
		s[i] == ';' ||
		s[i] == '.' ||
		s[i] == '!' ||
		s[i] == '?' ||
		s[i] == '"' ||
		s[i] == '(' ||
		s[i] == ')' ||
		s[i] == '{' ||
		s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
			i--;
		}
	i++;
	}
	return (s);
}
