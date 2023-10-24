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
	int i;
	listint_t *last;
	listint_t *tmp;

	last = malloc(sizeof(struct listint_s));
	tmp = *head;
	if (last != NULL)
	{
		if (*head != NULL)
		{
			for (i = 0; tmp != NULL; i++)
			{
				tmp = tmp->next;
				if (tmp->next == NULL)
				{
					tmp->next = last;
					break;
				}
			}
		}
		else
			*head = last;
		last->n = n;
		last->next = NULL;
	}
	else
		return (NULL);
	return (last);
}
