#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: points to the function that takes char *
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	for (int i = 0; name[i] != '\0'; ++i)
	{
		f(name[i]);
	}

	f('\n');
}
