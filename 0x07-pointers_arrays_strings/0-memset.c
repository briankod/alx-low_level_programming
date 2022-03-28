#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: starting address of the memory to be filled.
 * @b: value to be filled.
 * @n: number of bytes to filled.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	char *ptr = s;
	
	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
