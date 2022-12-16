 /*
  * File: 4-print_most_numbers.c
  * Auth: Akindele Abdul-Qudus
  */

#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 - 9
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		if (a != 2 and a != 4)
			_putchar((a % 10) + '0');
	_putchar('\n');
}
