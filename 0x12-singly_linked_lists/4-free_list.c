#include "lists.h"

/**
	* free_list - void func
	* Description: frees passed linked list
	* @head: linked list
	*/
void free_list(list_t *head)
{
	list_t *freedom;

	while (head != NULL)
	{
		freedom = head;
		head = head->next;
		free(freedom);
	}
}
