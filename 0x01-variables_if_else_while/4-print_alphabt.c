#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, except q and e'
 * Return: Always 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar('\n');
	return (0);

}
