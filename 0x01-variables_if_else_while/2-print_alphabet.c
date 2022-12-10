#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: 0
*/

int main(void)
{
	char lx;

	for (lx = 'a'; lx <= 'z'; lx++)
	{
		putchar(lx);
	}
	putchar('\n');
	return (0);
}
