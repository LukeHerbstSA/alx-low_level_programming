#include "main.h"

/**
	* factorial - int function
	* Description: returns the factorial of a given number
	* @n: passed factorial
	* Return: the result of the factorial
	*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
