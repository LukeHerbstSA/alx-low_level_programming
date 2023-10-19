#include "lists.h"

/**
	* add_node - list_t func
	* Description: adds new node at start of list_t
	* @head: ptr to ptr (ptr that points to a ptr that holds head)
	* @str: passed string to be held in node
	* Return: pointer to new node
	*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	int i;

	i = 0;
	new_head = malloc(sizeof(list_t));
	if (new_head != NULL)
	{
		while (str[i] != '\0')
			i++;
		new_head->next = *head;
		new_head->len = i;
		new_head->str = strdup(str);
	}
	else
		return (NULL);
	*head = new_node;
	return (new_head);
}
