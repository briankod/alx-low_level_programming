#include "main,.h"

/**
 * leet - check the code.
 * @s - an input string to encode.
 * Return: an encode string.
 */
char *leet(char *s)
{
	int i = 0, d;
	int l[] = {97, 101, 111, 116, 108};
	int u[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for ( d = 0; d < 5; d++)
		{
			if (*(s + i) == l[i] || *(s + i) == u[i])
			{
				*(s + i) = n[i];
				break;
			}
		}
		i++;
	}

	return (s);
}
