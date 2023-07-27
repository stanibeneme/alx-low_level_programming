#include "lists.h"
/**
 * list_len - returns all the number of elements inside a list.
 * @h: singly linked list.
 * Return: numbers of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
