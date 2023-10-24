#include "lists.h"

/**
	* print_listint - size_t func
	* Description: prints all elements of a linked list
	* @h: passed pointer to linked list (head node)
	* Return: int of type (size_t)
	*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h != NULL; i++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	else
		return (0);
	return (i);
}
