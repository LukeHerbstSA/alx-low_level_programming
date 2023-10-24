#include "lists.h"

/**
	* pop_listint - int func
	* Description: deletes head node & rets data val n
	* @head: ptr to ptr that holds start of singly
	* Return: data n
	*/

int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *ptr;

	if (*head != NULL)
	{
		head_data = (*head)->n;
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	else
		return (0);
	return (head_data);
}
