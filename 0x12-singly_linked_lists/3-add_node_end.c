#include "lists.h"

/**
	* add_node_end - function accessing node list_t
	* Description: adds a new node at the end of list_t
	* @head: pointer to start of list
	* @str: passed str val to be inserted in end node
	* Return: address of the new element or null if fail
	*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *iterator;
	int i;

	end_node = malloc(sizeof(list_t));
	iterator = *head;
	if (end_node != NULL)
	{
		end_node->str = strdup(str);
		end_node->len = i;
		end_node->next = NULL;
		if (*head != NULL)
		{
			while (str[i] != '\0')
				i++;
			while (iterator->next != NULL)
				iterator = iterator->next;
			iterator->next = end_node;
		}
		else
			*head = end_node;
	}
	else
		return (NULL);
	return (end_node);
}
