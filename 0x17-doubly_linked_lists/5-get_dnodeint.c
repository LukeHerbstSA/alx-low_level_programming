#include "lists.h"

/**
	* get_dnodeint_at_index - pointer func
	* Description: returns node at passed index
	* @head: doubly pointer
	* @index: int index
	* Return: pointer
	*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	if (index < 0)
		return (NULL);
	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (index == 0)
			return (tmp);
		tmp = tmp->next;
		index--;
	}
	return (NULL);
}
