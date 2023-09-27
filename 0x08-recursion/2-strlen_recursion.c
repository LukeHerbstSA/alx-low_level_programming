#include "main.h"

/**
	* _strlen_recursion - int function
	* Description: returns the length of a passed string
	* *s: passed string
	* Return: length of string s
	*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_strlen_recursion(s);
	}
	if (*s == '\0')
		return ();
}
