#include "main.h"

/**
	* more_numbers - void function
	* Description: prints numbers 0-14 ten times
	*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
			putchar(j);
	putchar('\n');
	}
}
