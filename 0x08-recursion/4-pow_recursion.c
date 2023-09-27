#include "main.h"

/**
	* _pow_recursion - int function
	* Description: returns int x raised to the power y
	* @x: base number
	* @y: exponent
	* Return: the result of the raised number
	*/
int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		x = x * x;
		y--;
		return (_pow_recursion(x, y));
	}
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
}
