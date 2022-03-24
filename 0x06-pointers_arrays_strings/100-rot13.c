#include <stdio.h>
#include "main.h"

/**
 * rot13 - function that encodes a string into 1337
 * @s: string to be encoded using rot13
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i = 0, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
