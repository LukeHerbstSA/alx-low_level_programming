#include <stdio.h>
#include <stdlib.h>

/**
	* alloc_grid - int function
	* Description: returns a grid of 0's of var width & height
	* @width: passed width of square
	* @height: passed height of square
	* Return: pointer to array of arrays of ints
	*/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(width * height * 4);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
		return (ptr);
	}
	else
		return (NULL);
}