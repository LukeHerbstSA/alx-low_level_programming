#include "main.h"

/**
	* _strlen - int function that takes char array
	* Description: returns the length of the passed string
	* @s: char array
	* Return: length of the string
	*/
int _strlen(char *s)
{
	int item = 0;

	while (s[item] != '\0')
		item++;
	return (item);
}
