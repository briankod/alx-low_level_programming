#include <math.h>
#include <stdio.h>
#include <time.h>

/**
 * random_valid_passwords - check the code.
 * @n: an input integer.
 * Return: nothing.
 */
void random_valid_passwords(int n)
{
	int i = 0;
	int randomizer = 0;
	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[n];

	randomizer = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = numbers[rand() % 8];
			randomizer = rand % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = numbers[rand() % 26];
			randomizer = rand % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = numbers[rand() % 26];
			randomizer = rand % 4;
			printf("%c", password[i]);
		}
	}
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main()
{
	int n = 14;

	random_valid_passwords(n);

	return (0);
}
