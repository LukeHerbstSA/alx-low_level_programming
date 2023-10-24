#include "lists.h"

/**
	* listint_len - size_t func
	* Description: returns num elements
	* @h: head ptr
	* Return: len size_t of linked lisst
	*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h != NULL; i++)
			h = h->next;
	}
	else
		return (0);
	return (i);
}
