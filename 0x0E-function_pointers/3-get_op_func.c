#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_function - selects correct function to
 * perform operation
 * Return: integer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

}
