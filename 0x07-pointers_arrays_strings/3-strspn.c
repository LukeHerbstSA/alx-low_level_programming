#include "main.h"

/**
	* _strspn - unsigned int func
	* Description: returns len at which chars in s were equal to accept
	* @s: char array
	* @accept: chars to compare with in s
	* Return: unsigned int
	*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] == accept[i])
			i++;
		else
			break;
	}
	return (i + 1);
}
