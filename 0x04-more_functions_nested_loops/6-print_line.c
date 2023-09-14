#include "main.h"

/**
	* print_line - void function
	* Description: This function will print a line
	* @n: int type
	*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar('_');
	putchar('\n');
}
