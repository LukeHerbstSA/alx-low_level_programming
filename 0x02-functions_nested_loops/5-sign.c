#include "main.h"

/**
	* print_sign - int return type
	* Description: This program returns various things based on the sign of int c
	* @c: the passed int that will have its sign evaluated
	* Return: dependant on sign
	*/
int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		putchar('0' + 1);
	}
	else if (c < 0)
	{
		putchar('-');
		return ;
	}
	else
	{
		putchar('0');
		return (0);
	}
}
