#include "holberton.h"

/**
 * *_strstr - finds the first occurrence of the substring
 * @haystack: pointer var
 * @needle: pointer var
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return (0);
}
