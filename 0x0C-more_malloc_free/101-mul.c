#include <stdio.h>
#include <stdio.lib>

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return nothing.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n")
			exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 > 0 && num2 > 0)
		{
			result = num1 * num2;
			printf("%d\n", result);
		}
		return (0);
	}
}