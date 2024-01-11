#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = h;
	size_t i = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
