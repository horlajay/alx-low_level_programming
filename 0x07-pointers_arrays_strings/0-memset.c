#include "main.h"
#include <string.h>

/**
* _memset -> this memory set function
* @s: string
* @b: a charcter
* @n: an integer
* Return:  a string
*/
char *_memset(char *s, char b, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return s;
}
