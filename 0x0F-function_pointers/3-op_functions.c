#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The result of division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: First number
 * @b: Second number
 *
 * Return: The modulus of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
