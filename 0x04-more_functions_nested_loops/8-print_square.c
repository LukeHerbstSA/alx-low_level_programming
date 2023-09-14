#include "main.h"

/**
	* print_square - 
	* Description: prints a square of row and depth 10 using size
	* @size: int type
	*/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
			putchar('#');
	}
}
