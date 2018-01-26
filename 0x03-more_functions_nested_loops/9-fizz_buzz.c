#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			if (!(num == 100))
				printf(" ");
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
