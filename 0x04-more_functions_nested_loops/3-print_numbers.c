#include "main.h"

/**
	* print_numbers - void function
	* Description: prints numbers from 0-9
	* Return: none
	*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i);
	putchar('\n');
}
