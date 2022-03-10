#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of int: %zu byte(s)\n", sizeof(d));
	printf("Size of long int: %zu byte(s)\n", sizeof(ld));
	printf("Size of long long int: %zu byte(s)\n", sizeof(lld));
	printf("Size of float: %zu byte(s)\n", sizeof(f));
	return (0);
}
