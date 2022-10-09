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
		printf("Searching in array: ");
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
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range;
	int high;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	range = 1;

	while (range < size && array[range] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", range, array[range]);
		range *= 2;
	}

	if ((size - 1) < range)
		high = size - 1;
	else
		high = range;

	printf("Value found between indexes [%lu] and [%d]\n", range / 2, high);
	return (binary_search(array, range / 2, high, value));
}
