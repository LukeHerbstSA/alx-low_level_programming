#include "lists.h"

/**
	* add_nodeint - listint_t func
	* Description: adds a new head node with remapping
	* @head: ptr to ptr that holds address of previous head
	* @n: value to be store in new_head n (int val)
	* Return: address of new element (head ptr) or NULL - fail
	*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;
	new_head = malloc(sizeof(struct listint_s));

	if (new_head != NULL)
	{
		new_head->n = n;
		new_head->next = *head;
	}
	else
		return (NULL);
	return (new_head);
}
