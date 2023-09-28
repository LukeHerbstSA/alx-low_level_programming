#include "main.h"

/**
	* _strlen_recursion - int function
	* Description: returns the length of a passed string
	* *s: passed string
	* Return: length of string s
	*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
	if (*s == '\0')
		return (i);
}
