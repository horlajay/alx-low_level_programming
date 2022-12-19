#include "main.h"
/**
 * print_numbers - prints number from '0'-'9'.
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
