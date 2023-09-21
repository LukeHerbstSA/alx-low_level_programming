#include "main.h"

/**
	* _strncpy - return pointer to result dest array
	* Description: Copy function emulating the std strncpy
	* @dest: returned array
	* @src: char source array
	* @n: int number of bytes to be collected from src
	* Return: pointer to result dest
	*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;
	while (src[j] != '\0')
		j++;
	for (i = 0; i < n; i++)
	{
		if (i >= j)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
