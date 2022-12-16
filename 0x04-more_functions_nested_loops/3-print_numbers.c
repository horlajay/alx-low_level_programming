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
char a = 0;
while (a <= 9)
{
_putchar(a + '0');
a++;
}
_putchar('\n');

}
