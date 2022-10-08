#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, first = 0, last = size - 1;

	if (!value || array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searchighng in array: ");
		for (i = first; i <= last; i++)
		{
			if (i == last)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}
		j = first + (last - first) / 2;
		if (array[j] == value)
			return (j);
		else if (value > array[j])
			first = j + 1;
		else if (value < array[j])
			last = j - 1;
	}
	return (-1);
}


/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j;
	int r;

	if (array != NULL && size > 0)
	{
		/* finding the range in which the element might be present */
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;	/* Exponentially increasing value of i. */
		}
		j = i / 2;
		if ((size - 1) < i)
			i = i;
		i = size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", (j), i);
		r = binary_search(array + (j), i + 1 - (j), value);
		if (r >= 0)
			return (r + (j));
	}
	return (-1);
}
