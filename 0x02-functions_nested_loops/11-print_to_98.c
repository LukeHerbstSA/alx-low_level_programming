#include "main.h"

/**
	* print_to_98 - this function uses the appropriate loop for the number n
	* Description: N/A
	* Parameter: c
	* Return: void
	*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n -= 1;
		}	
	}
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n += 1;
		}
	}
	printf("98");
	putchar('\n')
}
