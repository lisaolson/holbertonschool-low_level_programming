#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int char_byte;
	int int_byte;
	int long_byte;
	int long_long_byte;
	int float_byte;

	printf("Size of a char: %d byte(s)\n", char_byte);
	printf("Size of an int: %d byte(s)\n", int_byte);
	printf("Size of a long int: %d byte(s)\n", long_byte);
	printf("Size of a long long int: %d byte(s)\n", long_long_byte);
	printf("Size of a float: %d byte(s)\n", float_byte);
	return (0);
}
