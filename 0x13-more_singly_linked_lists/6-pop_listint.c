#include "lists.h"
/**
 * pop_listint - to pop list
 * @head: head pointer
 * Return: return the data, or 0 if no data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

