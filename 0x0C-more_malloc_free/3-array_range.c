#include "main.h"
#include <stdlib.h>

/**
	* array_range - int function
	* Description: returns an array of ints from min - max
	* @min: starting int
	* @max: ending int
	* Return: pointer to array of ints
	*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * 4);
	if (ptr != NULL)
	{
		for (i = 0; min <= max; i++)
		{
			ptr[i] = min;
			min++;
		}
	}
	else
		return (NULL);
	return (ptr);
}
