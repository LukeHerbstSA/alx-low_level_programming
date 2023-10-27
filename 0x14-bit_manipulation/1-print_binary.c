#include "main.h"

/**
	* print_binary - void func
	* Description: prints the binary rep of a number
	* @n: binary number
	*/
void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (((n >> i) & 1) == 1)
			break;
	}
	if (i > 0)
	{
		while (i >= 0)
		{
			putchar(48 + ((n >> i) & 1));
			i--;
		}
	}
	else
	{
		putchar('0');
	}
}
