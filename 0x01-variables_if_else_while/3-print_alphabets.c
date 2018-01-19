#include <stdio.h>

int main(void)

{
	char ch = 'a';

	char chH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chH <= 'Z')
	{
		putchar(chH);
		chH++;
	}
	putchar('\n');
	return (0);
}
