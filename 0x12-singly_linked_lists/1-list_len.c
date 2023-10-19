#include "lists.h"

/**
	* list_len - size_t return
	* Description: counts number of elements in struct ptr
	* @h: passed pointer to struct
	* Return: size of singly list
	*/
size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++)
		h = h->next;
	elements = elements * 3;
	return (elements);
}
