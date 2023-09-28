#include "main.h"

/**
	* _print_rev_recursion - void function
	* Description: prints array s in reverse
	* @s: passed char array
	*/
void _print_rev_recursion(char *s)
{
	int endex;

	endex = _rev_len(char *s) - 1;
	_rev_printer(*s, endex);
}

int _rev_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _rev_len(*s));
}

void _rev_printer(char *s, int endex)
{
	if (endex == -1)
		return;
	else
	{
		putchar(s[endex]);
		_rev_printer(char *s, endex - 1);
	}
}
