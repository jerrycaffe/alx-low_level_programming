#include "lists.h"

/**
 * sum_listint - add nodes given
 *
 * @head: points to node one
 *
 * Return: sum of nodes
*/
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
