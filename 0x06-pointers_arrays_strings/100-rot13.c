#include "main,h"

/**
 * rot13 - check the code.
 * @s: an input string to encode using  rot13.
 * Return: an encode string.
 */
char *rot13(char *s)
{
	int i = 0, j;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == c[j])
			{
				*(s + i) =rot13[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
