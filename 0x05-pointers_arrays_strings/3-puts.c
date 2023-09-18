#include "main.h"

/**
	* _puts - void function
	* Description: This function prints a string by accessing an array
	* @str: pointer to string
	*/
void _puts(char *str)
{
	int i;
	length = strlen(*str);

	for (i = 0; i < length - 1; i++)
		putchar((*str)[i]);
	return (0);
}
