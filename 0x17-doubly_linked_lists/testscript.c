#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include "1-dlistint_len.c"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	new->n = 9;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
