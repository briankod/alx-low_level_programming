#include "main.h"

/**
 * jack_bauer - check the code.
 * 
 * Return: nothing.
 */
void jack_bauer(void)
{
	int i, d;

	for (i = 0; i < 24; ++i)
	{
		for (d = 0; d < 60; ++d)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar('\n');
		}
	}
}