#include "main.h"

/**
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = ptr;
		s++;
	}
	return (NULL);
}
