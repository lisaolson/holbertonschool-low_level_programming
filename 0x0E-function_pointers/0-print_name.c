#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: name to print
 * @f: function name f
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
