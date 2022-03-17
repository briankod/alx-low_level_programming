#include "main.h"

/**
 * print_number - check the code.
 * @n: an input integer.
 * Return: nothing.
 */
void print_number(int n)
{
	char c, ch;
	int i;

	if (n < 0)
	{
		_putchar('-');
		c = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		c = ((n % 10) + '0');
		n /= 10;
	}
	i=0;
	while (n > 0)
	{
		i = i * 10 + (n % 10);
		n /= 10;
	}

	while (i > 0)
	{
		ch = ((i % 10) + '0');
		_putchar (ch);
		i /= 10;
	}
	_putchar (c);
}
	
