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
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (i + 1);
}
