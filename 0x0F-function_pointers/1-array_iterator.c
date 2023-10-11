#include <stdio.h>
#include <stdlib.h>

/**
	* array_iterator - void function
	* Description: calls action ptr for every element of array
	* @array: pointer to array of ints
	* @size: num of elements in array
	* @action: func pointer
	*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
	else
		return;
}
