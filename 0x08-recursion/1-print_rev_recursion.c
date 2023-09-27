#include "main.h"

/**
	* _print_rev_recursion - void function
	* Description: prints array s in reverse
	* @s: passed char array
	*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(s - s - 1);
		s++;
		_print_rev_recursion(s);
	}
	putchar ('\n');
}
