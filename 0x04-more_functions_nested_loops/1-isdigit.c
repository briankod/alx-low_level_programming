#include "main.h"

/**
 * _isdigit - check the code.
 * @c: an input integer.
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	char C = '0';
	int i = 0;

	for (; C <= '9'; C++)
	{
		if (C == c)
		{
			i = 1;
			break;
		}
	}

	return (i);
}
