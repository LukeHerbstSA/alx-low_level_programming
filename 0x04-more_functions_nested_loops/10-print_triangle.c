#include "main.h"

/**
	* print_triangle - void function
	* Description: prints a triangle of size diagonal depth
	* @size: int type
	*/
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar(' ');
		for (j = 0; j <= i; j++)
			putchar('#');
	}
	putchar('\n');
}
