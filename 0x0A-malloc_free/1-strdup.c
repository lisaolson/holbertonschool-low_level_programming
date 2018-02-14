#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - returns pointer containing copy of a string
 * @str: pointer string to copy
 * Return: 0
*/
char *_strdup(char *str)
{
	unsigned int i, len, a;
	char *newstr;

	a = 0;
	while (str[a] != '\0')
	{
		len = a;
		a++;
	}
	if (len == 0)
	{
		return (NULL);
	}
	newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	if (newstr == '\0')
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
