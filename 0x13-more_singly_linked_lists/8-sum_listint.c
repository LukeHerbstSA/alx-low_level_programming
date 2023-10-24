#include "lists.h"

/**
	* sum_listint - int func
	* Description: sums of all node ints
	* @head: passed linked list
	* Return: int sum
	*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
