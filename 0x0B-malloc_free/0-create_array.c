#include <stdio.h>
#include <stdlib.h>

/**
	* create_array - char function
	* Description: initializes an array with c
	* @size: num of elements (num bytes to allocate)
	* @c: character to initialize array
	* Return: Pointer to mem address of array or 1 for fail
	*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';
	return (ptr);
}
