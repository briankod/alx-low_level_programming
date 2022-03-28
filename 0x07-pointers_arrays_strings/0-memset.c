#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled.
 * @b: char value to be filled.
 * @n: number of bytes to filled.
 * Return: returns a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
