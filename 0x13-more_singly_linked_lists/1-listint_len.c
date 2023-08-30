#include "lists.h"
/**
* listint_len - come back to the origin codes
* @h: linked between origin list
*
* Return: return (0)
*/
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}

