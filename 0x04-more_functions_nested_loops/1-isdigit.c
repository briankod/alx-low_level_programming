#include "main.h"

/**
 * _isdigit - check the code.
 * @c: an input integer.
 * Return: 0 or 1.
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
