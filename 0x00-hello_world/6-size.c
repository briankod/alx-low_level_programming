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

	printf("Size of a char: %zu byte(s)", sizeof(c));
	printf("Size of int: %zu byte(s)", sizeof(d));
	printf("Size of long int: %zu byte(s)", sizeof(ld));
	printf("Size of long long int: %zu byte(s)",sizeof(lld));
	printf("Size of float: %zu byte(s)", sizeof(f));

	return (0);
}
