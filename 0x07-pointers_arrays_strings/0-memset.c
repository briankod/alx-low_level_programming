#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: starting address of the memory to be filled.
 * @b: char value to be filled.
 * @n: number of bytes to filled.
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	memset(s, b, n);

	return (ptr);
}
