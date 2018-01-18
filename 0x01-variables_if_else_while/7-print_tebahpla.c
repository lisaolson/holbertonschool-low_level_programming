#include <stdio.h>

int main(void)

{
        char ch;
        ch = 'z';

        while( ch >= 'a') {
                putchar(ch);
                ch--;
        }
        putchar('\n');
        return (0);
}
