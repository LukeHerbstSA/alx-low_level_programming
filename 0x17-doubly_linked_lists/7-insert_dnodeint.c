#include "lists.h"

/**
	* insert_dnodeint_at_index - pointer func
	* Description: inserts node at passed index
	* @h: pointer
	* @idx: index to insert
	* @n: value to store
	* Return: pointer to new node
	*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (*h == NULL && n == 0)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->n = n;
		*h = newnode;
		return (newnode);
	}
	if (*h == NULL && n > 0)
	{
		free(newnode);
		return (NULL);
	}
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			newnode->next = tmp;
			newnode->prev = tmp->prev;
			newnode->n = n;
			tmp->prev = newnode;
			return (newnode);
		}
		idx--;
	}
	free(newnode);
	return (NULL);
}
