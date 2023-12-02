#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of intergers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int n;
	va_list list;


	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		if (!seperator)
			printf("%d", va_arg(list, int));
		else if (seperator && i == 0)
			printf("%d", var_arg(list, int));
		else
			printf("%s%d", seperator, va_arg(list, int));
	}
		va_end(list);

		printf("\n");
}
