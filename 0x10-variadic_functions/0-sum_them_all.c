#include "variadic_function.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of its parameters
 * @n: is the number of argument passed
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0) return 0;
	unsigned int i;
	int sum = o;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);


	va_end(list);

	return (sum);
}
