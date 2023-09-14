#include "main.h"

/**
	* _isdigit - int function
	* Description: checks if int c is a digit from 0-9
	* @c: int arg
	* Return: 1 if true, 0 if not
	*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);

	return (0);
}
