#include "main.h"

/**
	* print_rev - void function
	* Description: takes a string array
	* @s: pointer to string array
	*/
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
