#include "main.h"

/**
	* print_numbers - void function
	* Description: prints numbers from 0-9
	*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');
}
