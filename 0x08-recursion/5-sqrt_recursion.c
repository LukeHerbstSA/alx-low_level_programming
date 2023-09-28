#include "main.h"

/**
	* _sqrt_recursion - int function
	* Description: Returns the sqrt of a number
	* @n: passed square
	* Return: -1 if n <= 0 or the root
	*/
int _sqrt_recursion(int n)
{
	int i;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	i = 0.5 * n;
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(i));
}
