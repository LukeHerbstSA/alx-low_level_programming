#include "main.h"

/**
	* print_alphabet_x10 - returns the alphabet
	* Description: uses a loop to print the alphabet 10 times
	* Return: Always 0 (Success)
	*/
void print_alphabet_x10(void)
{
	int rows;
	int i;

	for (rows = 0; rows < 10; rows++)
        {
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}
