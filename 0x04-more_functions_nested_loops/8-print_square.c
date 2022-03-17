#include "main.h"

/**
 * print_square - check the code.
 * @size: an input integer.
 * Return: 0.
 */
void print_square(int size)
{
	int i, d;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for(d = 0; d < size; d++)
				_putchar('#');
		}
	}
	else
		_putchar('\n');
}	
