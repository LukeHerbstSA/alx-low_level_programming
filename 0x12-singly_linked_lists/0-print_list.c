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
	list_t *tmp;
	
	tmp = h;
	for (size = 0; tmp != NULL; size++)
	{
		if (size != 0)
			printf("\n");
		if (tmp->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (size);
}
