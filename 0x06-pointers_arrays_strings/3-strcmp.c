#include "main.h"

/**
	* _strcmp - int function
	* Description: compares two strings
	* @s1: string 1
	* @s2: string 2
	* Return: strings are = 0 smaller <0/greater >0
	*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int val;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	val = s1[i] - s2[i];
	return (val);
}
