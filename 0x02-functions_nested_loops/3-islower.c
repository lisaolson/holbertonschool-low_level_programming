#include "holberton.h"

/**
 * is_lower - prints the alphabet 10 times in lowercase
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	} 
	else if (c > 'A' && c < 'Z')
	{
		return (0);
	}
	return (0);
}
