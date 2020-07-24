#include "clo.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main functtion
 * @argc: argument count
 * @argv: argument vector array
 * Return: int
*/
int main(int argc, char *argv[])
{
int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);
	return (0);
}
