#include "lists.h"

/**
	* free_dlistint - void
	* Description: frees passed dlist
	* @head: pointer to doubly
	*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	dlistint_t *prevtmp;

	while (tmp != NULL)
	{
		prevtmp = tmp;
		tmp = tmp->next;
		free(prevtmp);
	}
}
