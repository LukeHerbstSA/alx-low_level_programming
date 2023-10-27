#include "main.h"

/**
	* binary_to_uint - unsigned int func
	* Description: turns passed binary string into number
	* @b: binary string
	* Return: binary string in number form
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int i;

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' || b[i] != '1')
				return (0);
		}
		for (i = 0; b[i] != '\0'; i++)
		{
			value <<= 1;
			if (b[i] == '1')
				value++;
		}
	}
	else
		return (0);
	return (value);
}
