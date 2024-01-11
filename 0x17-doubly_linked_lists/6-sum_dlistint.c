#include "lists.h"

/**
	* sum_dlistint - int func
	* Description: adds up the values of list
	* @head: pointer to doubly
	* Return: int
	*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
