#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
	* sum_them_all - int func
	* Description: adds all passed args and returns it
	* @n: num of args
	* Return: returns sum of all args
	*/
int sum_them_all(const unsigned int n, ...)
{
	va_list adder;
	int total;
	unsigned int i;

	va_start(adder, n);

	total = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		total = total + va_arg(adder, int);
	va_end(adder);
	return (total);
}
