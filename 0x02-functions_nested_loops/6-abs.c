#include "main.h"

/**
	* _abs - int function
	* Description: Calculates the absolute value of a number
	* @x: passed int to be have its abs value printed
	* Return: Always x (Success)
	*/
int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
	putchar('\n');
}
