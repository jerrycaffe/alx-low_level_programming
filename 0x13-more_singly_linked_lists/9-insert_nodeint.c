#include "lists.h"

/**
 * insert_nodeint_at_index - adds node to index
 *
 * @head: points to head
 * @idx: add new node on this index
 * @n: value of new node
 *
 * Return: NULL or pointer to new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current;
	unsigned int index;

	current = *head;

	node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || node == NULL)
		return (NULL);

	node->n = n;

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else if (current->next)
	{
		node->next = current->next;
		current->next = node;
	}
	else
	{
		node->next = NULL;
		current->next = node;
	}

	return (node);
}
