#include "main.h"

/**
	* get_endianness - int func
	* Description: returns 0 if big endianness or 1
	* Return: 1 or 0
	*/
int get_endianness(void)
{
	int num = 1;
	char *endi = (char *)&num;

	if ((*endi + 48) == '1')
		return (1);
	return (0);
}
