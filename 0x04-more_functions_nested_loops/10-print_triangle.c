#include "main.h"

/**
	* print_triangle - void function
	* Description: prints a triangle of size diagonal depth
	* @size: int type
	*/
void print_triangle(int size)
{
	int x;
	int i;
	int j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (i = size - 1; i > x; i--)
				putchar(' ');
			for (j = 0; j <= x; j++)
				putchar('#');
		}
	}
}
