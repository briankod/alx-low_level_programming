#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer of address to be filled.
 * @b: constant byte b.
 * @n: number of bytes to be filled.
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
