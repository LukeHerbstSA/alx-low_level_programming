#include "lists.h"

/**
	* add_dnodeint_end - pointer to doubly
	* Description: adds node with val n to head of doubly
	* @head: pointer to doubly
	* @n: val to be stored
	* Return: pointer
	*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode ==  NULL)
		return (NULL);
	if (tmp == NULL)
	{
		*head = newnode;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
		return (*head);
	}
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
