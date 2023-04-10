#include "lists.h"

/**
 * add_nodeint - will add new node
 *
 * @head: pointer to the first node
 * @n: value to number
 *
 * Return: address to newly added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (*head == NULL)
		node->next = NULL;
	else
		node->next = *head;

	node->n = n;

	*head = node;

	return (*head);
}
