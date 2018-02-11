#include "holberton.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: vector array
 * Return: integer
*/
int main(int argc, char *argv[])
{
int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

