#include "main.h"
#include <stdio.h>

/**
	* _isupper - int function
	* Description: checks if an int is uppercase
	* @c: int type
	* Return: 1 if true, 0 if not
	*/

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
