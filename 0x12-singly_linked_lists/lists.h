#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
	* struct singly_list - list struct
	* Description: contains str, len & ptr to next node
	* @str: passed pointer to string / string
	* @len: length of string
	* @next: pointer to next node (NULL on end)
	*/
typedef struct singly_list
{
	char *str;
	unsigned int len;
	struct singly_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
