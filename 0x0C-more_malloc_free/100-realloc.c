#include "main.h"
#include <stdlib.h>

/**
	* _realloc - void function
	* @ptr: passed allocated memory address
	* @old_size: old size of ptr
	* @new_size: the amount of memory to be reassigned to ptr
	* Return: pointer if successful, or NULL
	*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *cpptr;
	int i;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
		cpptr = malloc(new_size);
		return (cpptr);
	else
	{
		cpptr = malloc(new_size);
		if (cpptr != NULL)
		{
			for (i = 0; ((char *)(ptr))[i] != '\0'; i++)
				((char *)(cpptr))[i] = ((char *)(ptr))[i];
			((char *)(cpptr))[i] = '\0';
		}
		else
			return (NULL);
	}
	free(ptr);
	return (cpptr);
}
