#include "lists.h"

/**
 * free_listint - function to free list
 *
 * @head: points to first node
 *
 * Return: 0
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
