#include <stdio.h>
/**
 * main - prints alphabets in lowercase followed by a new line
 * Return: 0
*/

int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		if (lt != 'e' && lt != 'q')
			putchar(lt);
	}
	putchar('\n');
	return (0);
}
