#include "main.h"

/**
	* _puts - void function
	* Description: This function prints a string by accessing an array
	* @str: pointer to string
	*/
void _puts(char *str)
{
	int item = 0;

	while (str[item] != '\0')
	{
		putchar(str[item]);
		item++;
	}
	putchar('\n');
}
