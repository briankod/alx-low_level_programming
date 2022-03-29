#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to search in.
 * @needle: an input string to locate into string haystack.
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1 = needle, *ptr2 = haystack;

	while (*haystack)
	{
		ptr2 = haystack;
		needle = ptr1;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = ptr2 + 1;
	}
	return (NULL);
}
