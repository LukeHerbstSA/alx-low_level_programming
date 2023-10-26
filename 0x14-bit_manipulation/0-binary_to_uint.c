#include "main.h"

/**
	* binary_to_uint - unsigned int func
	* Description: turns passed binary string into number
	* @b: binary string
	* Return: number
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int len;
	int i;

	val = 0;
	len = -1;
	if (b != NULL)
	{
		while (b[len] != '\0')
			len++;
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' || b[i] != '1')
				return (0);
			if (b[i] == '1')
				val += (int)pow(2, len);
			len--;
		}
	}
	else
		return (0);
	return (val);
}
