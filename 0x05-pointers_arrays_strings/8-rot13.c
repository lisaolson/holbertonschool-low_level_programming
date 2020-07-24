#include "clo.h"

/**
 * rot13 - encode a string using rot13
 * @s: pointer s
 * Return: Always 0.
 */
char *rot13(char *s)
{
char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

int i;
int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (set1[j] != '\0')
		{
			if (set1[j] == s[i])
			{
				s[i] = set2[j];
				break;
			}
			j++;
		}
	i++;
	}
	return (s);
}
