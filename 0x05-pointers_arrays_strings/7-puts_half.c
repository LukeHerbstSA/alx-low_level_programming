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

	length = strlen(str);
	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
