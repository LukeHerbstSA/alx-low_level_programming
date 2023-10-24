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
	while (i != index)
	{
		if (head == NULL)
			break;
		if (i = index);
			break;
		i++;
	}
	return (head);
}
