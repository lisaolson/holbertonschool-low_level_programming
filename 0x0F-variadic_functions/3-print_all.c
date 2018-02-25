#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @list: char to print
 * Return: Nothing
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an int
 * @list: int to print
 * Return: Nothing
*/
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: float to print
 * Return: Nothing
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: string to print
 * Return: Nothing
*/
void print_string(va_list list)
{
	char *string = va_arg(list, char*);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: string to compare
 * Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *s = "";

	print_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		while (print[j].p != '\0')
		{
			if (format[i] == print[j].p)
			{
				printf("%s", s);
				print[j].f(list);
				s = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
