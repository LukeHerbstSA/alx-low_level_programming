#include "main.h"

/**
	* _strcmp - int function
	* Description: stdout depends on ascii diff btwn str1 & str2
	* @s1: string 1
	* @s2: string 2
	* Return: ascii of s1 - ascii of s2 / 0
	*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
