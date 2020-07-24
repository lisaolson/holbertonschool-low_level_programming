#include "clo.h"

/**
 * *leet - encode string into 1337
 * @s: pointer s
 * Return: Always 0.
 */
char *leet(char *s)
{
char num[] = "4307143701";
char let[] = "aeotlAEOTL";

int i;
int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (let[j] != '\0')
		{
			if (let[j] == s[i])
			{
				s[i] = num[j];
			}
			j++;
		}
	i++;
	}
	return (s);
}
