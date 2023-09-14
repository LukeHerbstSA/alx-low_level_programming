#include "main.h"
/**
	* _isalpha - prototype function checker
	* Description: this part of the program evaluates the conditions
	* @c: an int
	* Return: 1 on success 0 on failure
	*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	putchar('\n');
	return (0);
}
