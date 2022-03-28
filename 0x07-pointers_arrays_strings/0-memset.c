#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b.
 * @s: starting address of memory to be filled.
 * @b: value to be filled.
 * @n: number of bytes to be filled starting from s to be filled.
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = memset(s,b,n);
	
	return (ptr);
}
