#include <stdio.h>
#include<stdlib.h>
#include <time.h>

/**
 * random_valid_passwords - check the code.
 * @len: an input integer.
 * @num: an input integer.
 * Return: nothing.
 */
void random_valid_passwords(int len, int num)
{
	int temp;

	srand((unsigned int)(time(0)));

	while (num--)
	{
		temp = len;
		printf("\n");
		while (temp--)
		{
			putchar(rand() % 100 + 1);
			srand(rand());
		}
		temp = len;
	}
	printf("\n");
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main()
{
	int len = 14;
	int num = 1;

	random_valid_passwords(len, num);

	return (0);
}
