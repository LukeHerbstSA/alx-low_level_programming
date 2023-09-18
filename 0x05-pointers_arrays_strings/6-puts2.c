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
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
