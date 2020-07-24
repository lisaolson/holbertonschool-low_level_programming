#include <stdlib.h>
#include "clo.h"

/**
 * *_strdup - returns pointer containing copy of a string
 * @str: pointer string to copy
 * Return: 0
*/
char *_strdup(char *str)
{
	unsigned int i, len;
	char *newstr;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
