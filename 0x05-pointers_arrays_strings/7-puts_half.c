#include "main.h"

/**
	* puts_half - void function
	* Description: prints half of a string
	* @str: string
	*/
void puts_half(char *str)
{
	int i;
	int length;
	int hlf_length;

	length = strlen(str);
	if (length % 2 != 0)
		hlf_length = (length + 1) / 2;
	else
		hlf_length = length / 2;
	for (i = hlf_length; i < length; i++)
		putchar(i);
	putchar('\n');
}
