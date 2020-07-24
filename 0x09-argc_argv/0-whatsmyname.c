#include <stdio.h>
#include "clo.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: vector array
 * Return: 0
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
