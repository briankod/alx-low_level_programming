#include "main.h"

/**_strncat - check the code.
 * @dest: an input string.
 * @src: an input string.
 * @n: an input integer.
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (d < n)
	{
		*(dest + i) = *(src + d);
		if (*(src + d) == '\0')
			break;
		i++;
		d++;
	}
	return (dest);
}
