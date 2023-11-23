#include "main.h"

/**
	* set_bit - int func
	* Description: sets bit at given index at ptr n to 1
	* @n: pointer to int
	* @index: bits to shift to get to bit
	* Return: 1 for success, -1 in fail
	*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 31)
		*n = (*n) | (1 << index);
	else
		return (-1);
	return (1);
}
