#include "lists.h"
/**
 * sum_listint - sum list function
 * @head: pointer head
 * Return: return the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}


