#include "main.h"

/**
	* _puts_recursion - void function
	* Description: increments an arr pointer to print a str
	* @s: passed char array pointer
	*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(*s);
	}
	putchar('\n');
}
