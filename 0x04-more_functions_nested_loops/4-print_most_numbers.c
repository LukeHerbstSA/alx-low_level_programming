#include "main.h"

/**
	* print_most_numbers - void function
	* Description: prints numbers 0-9 except 2 & 4
	*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			putchar('0' + i);
	}
	putchar('\n');
}
