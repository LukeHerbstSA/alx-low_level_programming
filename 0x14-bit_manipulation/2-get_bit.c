#include "main.h"

/**
	* get_bit - int func
	* Description: returns bit found by shifting in index in n
	* @n: passed num
	* @index: amount to shift in bits in num
	* Return: number at index shift in var n (0 or 1)
	*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index <= 31)
		bit = (n >> index) & 1;
	else
		return (-1);
	return (bit);
}
