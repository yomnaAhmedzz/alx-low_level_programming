#include "lists.h"
/**
* add_nodeint - Add new elements to the new list
* @head: focs on some new codes
* @n: linked and new lists and some new codes
*
* Return: point (NULL)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));
	if (!s)
		return (NULL);

	s->n = n;
	s->next = *head;
	*head = s;

	return (s);
}
