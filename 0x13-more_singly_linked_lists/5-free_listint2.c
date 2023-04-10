#include "lists.h"

/**
 * free_listint2 - sets head to NULL free last node
 *
 * @head: points to head
 *
 * Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *initial;

	if (head != NULL)
	{
		node = *head;

		while ((initial = node) != NULL)
		{
			node = node->next;
			free(initial);
		}

		*head = NULL;
	}
}
