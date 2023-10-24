#include "lists.h"

/**
	* free_listint2 - void function
	* Description: frees passed list and sets head to null
	* @head: passed ptr to ptr to start of linked list
	*/
void free_listint2(listint_t **head)
{
	listint_t *freedom;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			freedom = *head;
			*head = (*head)->next;
			free(freedom);
		}
	}
	else
		return;
	head = NULL;
}
