#include "main.h"

/**
	* print_square - void function
	* Description: prints a square of row and depth 10 using size
	* @size: int type
	*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				putchar('#');
			putchar('\n');
		}
	}
}

