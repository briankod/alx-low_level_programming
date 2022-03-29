#include "main.h"
#include <stdlb.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to search in.
 * @needle: an input string to locate into string haystack.
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j] != '\0')
		j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
