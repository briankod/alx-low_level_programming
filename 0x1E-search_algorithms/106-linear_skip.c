#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a sorted skip list
 * of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *prev = list;

	if (!list)
		return (NULL);

	while (node->express && node->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index,
				(int)node->n);
		prev = node;
		node = node->express;
	}

	printf("Value found between indexes [%d] and [%d]\n",
			(int)prev->index, (int)node->index);

	while (prev != node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index,
				(int)prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
