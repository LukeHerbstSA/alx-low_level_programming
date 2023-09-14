#include "main.h"
/**
	* times_table - void function
	* Description: prints the 9 times table
	* Return: null
	*/
void times_table(void)
{
	int i;
	int isub;
	int value = 0;

	for (i = 0; i <= 9; i++)
	{
		for (isub = 0 ; isub <= 9; isub++)
		{
			value = value + i;
			putchar('0' + value);
			if (isub != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
