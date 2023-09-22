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
	int i;
	int j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
