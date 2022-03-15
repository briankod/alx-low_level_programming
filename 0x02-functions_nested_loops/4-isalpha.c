#include "main.h"

/**
 * _isalpha - check the code.
 * 
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	char c, C;
	int i = 0;

	for (c = 'a'; c <= 'z'; ++c)
	{
		for (C = 'A'; C <= 'Z'; ++C)
		{
			if (c == c || c == C)
				i = 1;
		}
	}
	return (i);
}