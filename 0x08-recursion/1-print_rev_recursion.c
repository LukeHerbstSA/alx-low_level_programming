#include "main.h"

/**
	* _print_rev_recursion - void function
	* Description: prints array s in reverse
	* @s: passed char array
	*/
void _print_rev_recursion(char *s)
{
	char i;

	while (*s != '\0')
	{
		i = s - s - 1;
		putchar(i);
		s++;
		_print_rev_recursion(s);
	}
}
