#include "main.h"

/**
 * print_times_table - check the code.
 * @n: an input integer.
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i, d;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (d = 1; d <= n; d++)
				putformat(i * d);
			_putchar('\n');
		}
	}
}

/**
 * putformat - check the code.
 * @n: an input integer.
 * Return: nothing.
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
