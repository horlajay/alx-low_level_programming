#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: 0
*/

int main(void)
{
	char x;

	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	return (0);
}
