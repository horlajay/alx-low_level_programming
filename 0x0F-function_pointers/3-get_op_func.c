#include "3-calc.h"
#include <stdlib>
/**
 * get_op_func - selects right function for operation
 * @s: the operator passed as an argument
 *
 * Return: pointer to the function of the right operation
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

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op != *s)
			i++;
	return (ops[i].f);
}
