#include "lists.h"

/**
 * get_nodeint_at_index - get node at given index
 *
 * @head: points to the first node
 * @index: destination index
 *
 * Return: NULL or node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q;

	for (q = 0; q < index && head != NULL; q++)
		head = head->next;

	return (head);
}
