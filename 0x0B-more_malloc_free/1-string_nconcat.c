#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer string 1
 * @s2: string to add to string 1
 * @n: add n chars of s2
 * Return: NULL or pointer to concatenated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, total, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0' && n > len2)
		len2++;
	total = len1 + len2;
	ar = malloc((total + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ar[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		ar[i] = s2[j];
		j++;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
