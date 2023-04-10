#include "lists.h"

/**
 * pop_listint - function to delete node head
 *
 * @head: pointer to head
 *
 * Return: head or 0
*/
int pop_listint(listint_t **head)
{
	int node_one;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	node_one = temp->n;

	free(temp);

	*head = next;

	return (node_one);
}
