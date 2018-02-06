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
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				haystack += i;
			}
		}
	}
	return (haystack);
}
