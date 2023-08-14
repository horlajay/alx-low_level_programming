#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, and then in uppercase'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int N;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (N = 65; N <= 90; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
