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
	listint_t *tmp;

	last = malloc(sizeof(listint_t));
	tmp = *head;
	if (last != NULL)
	{
		if (tmp != NULL)
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = last;
		}
		else
			tmp = last;
		last->n = n;
		last->next = NULL;
	}
	else
		return (NULL);
	return (last);
}
