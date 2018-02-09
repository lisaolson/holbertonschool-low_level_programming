#include "holberton.h"
/**
 * _strlen_recursion - finds length of string
 * @s: pointer string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int total = 1;

	if (*s)
		total += _strlen_recursion(s + 1);
	if (*s == '\0')
		return (total - 1);
	return (total);
}

/**
 * palin - checks whether string is palindrome
 * @s: string s
 * @a: counter through string
 * Return: 1 or 0 if s is palindrome
 */
int palin(int a, char *s)
{
	if (*s)
	{
		if (*s != s[_strlen_recursion(s) - a])
		{
			return (0);
		}
		else
		{
			return (palin(a + 1, s + 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - function to return palindrome
 * @s: string s
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int a = 1;

	if (*s == '\0')
		return (1);
	return (palin(a, s));
}
