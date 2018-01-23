#include "holberton.h"

void print_alphabet_x10(void) {
        char c = 'a';
	int num = 0;
        while(c < 'z')
	{
		while(num <= 10) 
		{
			num++;
		}
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
