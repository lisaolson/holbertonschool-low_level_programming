#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

typedef struct op
{
	char *op;
	void *f(va_list ap);
} op_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
