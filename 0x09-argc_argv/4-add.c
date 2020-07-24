#include "clo.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: vector array
 * Return: total or 0
*/

int main(int argc, char *argv[])
{
int i, total = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
			return (0);
		}
		else if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += atoi(argv[i]);
		}
	}
	printf("%d\n", total);
	return (0);
}
