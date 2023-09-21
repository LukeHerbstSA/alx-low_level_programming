#include "main.h"

/**
	* string_toupper - char function
	* Description: turns a passed string into uppercase
	* @ex: char array
	* Return: returns the character
	*/
char *string_toupper(char *ex)
{
	int i;

	for (i = 0; ex[i] != '\0'; i++)
	{
		if (ex[i] >= 97 && ex[i] <= 122)
			ex[i] = ex[i] - 32;
	}
	return (ex);
}
