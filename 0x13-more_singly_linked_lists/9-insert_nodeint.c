#include "lists.h"

/**
	* insert_nodeint_at_index - listint_t func
	* Description: inserts node at n position
	* @head: passed linked list
	* @idx: index to insert at
	* @n: value to be placed at n
	* Return: address of new element
	*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *prev_address;
	listint_t *new_node;
	unsigned int i;

	tmp = *head;
	new_node = malloc(sizeof(struct listint_s));
	i = 0;
	if (new_node != NULL)
	{
		if (idx = 0)
			*head = new_node;
		else
		{
			while (tmp != NULL)
			{
				prev_address = tmp;
				i++;
				tmp = tmp->next;
				if (i == idx)
				{
					prev_address->next = new_node;
					break;
				}
			}
		}
		if (i != idx)
			return (NULL);
		else
		{
			new_node->n = n;
			new_node->next = tmp;
		}
	}
	else
		return (NULL);
	return (new_node);
}
