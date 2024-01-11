#include "lists.h"

/**
	* dlistint_len - size_t func
	* Description: returns number of elements
	* @h: pointer to doubly list
	* Return: size_t nodes
	*/
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
