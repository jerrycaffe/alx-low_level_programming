#include "lists.h"

/**
 * listint_len - number of elements in list
 *
 * @h: head of the list
 *
 * Return: numbers of list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counts = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		counts++;
	}

	return (counts);
}
