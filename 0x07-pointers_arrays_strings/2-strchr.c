#include "main.h"

/**
	* _strchr - char function
	* Description: finds the instance of c in s
	* @s: ptr to string
	* @c: instance to find
	* Return: pointer or null
	*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
