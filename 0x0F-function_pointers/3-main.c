#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program to perform simple operations.
 * @argc: argument count.
 * @argv: array of arguments.
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int num1, num2, c;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(num1, num2);
	printf("%d\n", c);
	return (0);
}
