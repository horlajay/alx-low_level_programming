/*
 * File: 3-print_numbers.c
 * Auth: Akindele Abdul-Qudus
 */

#include "main.h"
/**
 * print_numbers - prints number from 0-9.
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
		_putchar(c);

	_putchar('\n');
}
