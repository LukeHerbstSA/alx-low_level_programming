#include "main.h"

/**
	* _strpbrk - char function
	* Description: returns pointer to any match in accept
	* @s: passed string
	* @accept: instance holder
	* Return: returns pointer s
	*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (0);
}
