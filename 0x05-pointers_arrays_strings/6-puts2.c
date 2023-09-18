#include "main.h"

/**
	* puts2 - void function
	* Description: prints every other character starting with the first one
	* @str: string
	*/
void puts2(char *str)
{
	int i;
	int length;

	length = strlen(str);
	i = 0;
	while (i <= length)
	{
		putchar(i);
		i = i + 2;
	}
	putchar('\n');
}
