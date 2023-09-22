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
	int i;
	int j;
	unsigned int count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != s[j])
			return (count);
		if (s[i] == s[j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}
