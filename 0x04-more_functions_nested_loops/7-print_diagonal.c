#include "main.h"

/**
	* print_diagonal - void function
	* Description: prints a diagonal line with n depth
	* @n: int type
	*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
			putchar('\\')
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
