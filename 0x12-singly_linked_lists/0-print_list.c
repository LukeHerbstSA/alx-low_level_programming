#include "main.h"

/**
	* print_list - num of nodes in linked list returned
	* Description: prints all elements in nodes of passed linked list
	* @h: passed pointer head that points to first node 
	* Return: size_t
	*/
size_t print_list(const list_t *h)
{
	size_t size;
	
	for (size = 0; h != NULL; size++)
	{
		if (tmp->str == NULL)
			printf("[%d] (nil)", 0);
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
	}
	return (size);
}
