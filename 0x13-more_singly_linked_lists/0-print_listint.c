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

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
