#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all the numbers of base 16 in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar('a' + n - 10);
		}
	}
	putchar('\n');
	return (0);
}
