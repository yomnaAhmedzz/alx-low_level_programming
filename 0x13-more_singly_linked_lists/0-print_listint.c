#include "lists.h"
/**
* print_listint - prints the new variabls
* @h: copy some new variabls
*
* Return: numbers of codes
*/
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
