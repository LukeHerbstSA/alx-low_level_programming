#include "main.h"

/**
	* print_rev - void function
	* Description: takes a string array
	* @s: pointer to string array
	*/
void print_rev(char *s)
{
	int i;
	int length;

	length = strlen(*s);

	for (i = -1; i > (length + 1)*-1; i--)
	{
		putchar(i);
	}
	putchar('\n');
}
