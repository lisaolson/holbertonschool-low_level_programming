#include <stdio.h>

int main(void)

{
	char ch;
	ch = 'a';

	while( ch <= 'z') {
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
