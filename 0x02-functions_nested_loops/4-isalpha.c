#include "main.h"
/**
	* isalpha - prototype function checker
	* Description: this part of the program evaluates the conditions
	* Parameter: c - is the number
	* Return: Always 0 (Success)
	*/
int isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	putchar('\n');
	return (0);
}
