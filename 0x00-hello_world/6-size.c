#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_byte;
	int int_byte;
	long long_byte;
	long long long_long_byte;
	float float_byte;

	printf("Size of a char: %d byte(s)\n", sizeof(char_byte));
	printf("Size of an int: %d byte(s)\n", sizeof(int_byte));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_byte));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_byte));
	printf("Size of a float: %d byte(s)\n", sizeof(float_byte));
	return (0);
}
