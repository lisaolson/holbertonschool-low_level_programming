#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: pointer string 1
 * @s2: pointer string 2
 * Return: pointer string
*/
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, j, total, len1, len2;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		s2 = '\0';
	}
	i = 0;
	while (s1[i] != '\0')
	{
		len1 = i;
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		len2 = j;
		j++;
	}
	total = len1 + len2;
	ar = malloc((total + 3) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		j++;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
