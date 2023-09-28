#include "main.h"

/**
	* is_palindrome - int function
	* Description: program to check if a string is a palindrome
	* @s: *passed array
	* Return: 1 if palin, 0 if not
	*/
int is_palindrome(char *s)
{
	int len;

	len = _len(s);
	if (len == 0 || len == 1)
		return (1);
	return (checker(s, len));
}

/**
	* _len - int function
	* Description: recurses over itself with base case 0
	* @s: passed array
	* Return: length of string
	*/
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _len(s++));
}

/**
	* checker - int function
	* Description: checks if a passed string is a palindrome
	* @s: passed array
	* @len: the index of the last element (refer to top)
	* Return: 1 if palin, 0 if not (returns to caller function)
	*/
int checker(char *s, int len)
{
	if (*s == *(s + len - 1))
	{
		if (len == 0)
			return (1);
		else
			return (checker(s++, len - 1));
	}
	else
		return (0);
}
