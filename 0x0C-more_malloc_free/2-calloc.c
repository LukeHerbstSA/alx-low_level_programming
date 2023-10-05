#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
	* _calloc - void function
	* Description: allocates memory for an array
	* @nmemb: number of elements
	* @size: size of each element
	* Return: void ptr
	*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;
	int bytes;

	bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(bytes);
	if (ptr != NULL)
	{
		for (i = 0; i < bytes; i++)
			*((char *)(ptr) + i) = 0;
	}
	else
		return (NULL);
	return (ptr);
}
