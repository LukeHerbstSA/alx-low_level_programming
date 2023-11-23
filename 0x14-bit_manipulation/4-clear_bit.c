#include "main.h"

/**
	* clear_bit - int func
	* Description: clears bit at given index
	* @n: pointer to long int
	* @index: bit position needing to be cleared
	* Return: 1 on success or -1 on fail
	*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 31)
	{
		*n = (*n) & (~(1 << index));
	}
	else
		return (-1);
	return (1);
}
