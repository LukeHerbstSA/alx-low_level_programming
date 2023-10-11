#include <stdio.h>
#include <stdlib.h>

/**
	* int_index - int func
	* Description: finds the first element with a value matching a num
	* @array: passed array of ints
	* @size: number of elements in array
	* @cmp: pointer to function that checks the passed int
	* Return: index of the first element that which is a matching number
	*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check;

	check = 0;
	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			check = (*cmp)(array[i]);
			if (check != 0)
				return (i);
		}
	}
	else
		return (-1);
	return (-1);
}
