#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function adds node at the start of doubly linked list.
 * @head: a double pointer to head of list
 * @n: value of new node
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *x = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		x = *head;
		x->prev = new_node;
		*head = new_node;
		new_node->next = x;
		return (new_node);
	}
	return (NULL);
}
