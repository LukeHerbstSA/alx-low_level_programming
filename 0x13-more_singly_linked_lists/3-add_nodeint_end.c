#include "lists.h"

/**
	* add_nodeint_end - listint_t func
	* Description: adds a node to the end
	* @head: ptr to ptr that holds address of 1st node
	* @n: value to be stored in last node
	* Return: listint_t address to start of last element
	*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;

	last = malloc(sizeof(struct listint_s));
	if (last != NULL)
	{
		last->n = n;
		last->next = NULL;
		if (*head != NULL)
		{
			while ((*head)->next != NULL)
				*head = (*head)->next;
			(*head)->next = last;
		}
		else
			*head = last;
	}
	else
		return (NULL);
	return (last);
}
