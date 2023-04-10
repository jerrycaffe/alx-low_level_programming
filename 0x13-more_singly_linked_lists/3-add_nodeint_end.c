#include "lists.h"

/**
 * add_nodeint_end - adds new node to end
 *
 * @head: pointer to the first node
 * @n: element int to add to new node
 *
 * Return: address of new element or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *current;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	current = *head;

	if (current == NULL)
		*head = node;
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = node;
	}

	return (*head);
}
