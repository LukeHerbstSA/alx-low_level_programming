#include "lists.h"

/**
	* get_nodeint_at_index - listint_t func 
	* Description: returns node at the given passed index
	* @head: passed linked lists
	* @index: position to return
	* Return: address to node
	*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (index = 0)
		return (head);
	if (head != NULL)
	{
		while (head != NULL)
		{
			if (i = index)
				return (head);
			i++;
			head = head->next;
		}
	}
	else
		return (NULL);
}
