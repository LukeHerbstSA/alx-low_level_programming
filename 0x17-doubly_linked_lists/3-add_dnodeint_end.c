#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *tmp = *head;
	dlistint_t newnode = malloc(sizeof(dlistint_t));

	if (newnode ==  NULL)
		return (NULL);
	if (tmp == NULL)
		*head = newnode;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
		return (*head);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	newnode->next = NULL;
	newnode->prev = tmp;
	newnode->n = n;
	return (newnode);
}
