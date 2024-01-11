#include "lists.h"

/**
	* add_dnodeint - dlistint_t pointer return
	* Description: adds node at the beginning
	* @head: passed pointer to doubly
	* @n: value to be stored
	* Return: pointer to doubly
	*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
		return (*head);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
