#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
