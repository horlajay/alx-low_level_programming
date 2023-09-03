#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}
