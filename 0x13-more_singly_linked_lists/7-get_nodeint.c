#include "lists.h"
/**
 * get_nodeint_at_index - put node in index
 * @head: pointer to head
 * @index: index that has number
 * Return: return nodelist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
