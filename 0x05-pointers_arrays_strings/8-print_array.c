#include "main.h"

/**
	* print_array - void function
	* Description: returns n number of elements from array
	* @a: int array
	* @n: int
	*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
