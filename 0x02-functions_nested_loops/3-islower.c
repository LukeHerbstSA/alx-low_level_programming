#include "main.h"

/**
	* _islower - this will check if c is within the lowercase range
	* Description: will return 1 if c is evaluated as a lowercase character
	* @c: passed int to be evaluated
	* Return: Always 0 (Success)
	*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
	return (0);
}
