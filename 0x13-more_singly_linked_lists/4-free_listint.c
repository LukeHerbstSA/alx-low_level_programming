#include "lists.h"

/**
	* free_listint - void func
	* Description: frees passed singly
	* @head: pointer to start of singly
	*/
void free_listint(listint_t *head)
{
	int i;
	listint_t *tmp;

	if (head != NULL)
	{
		for (i = 0; head != NULL; i++)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
	free(head);
}
