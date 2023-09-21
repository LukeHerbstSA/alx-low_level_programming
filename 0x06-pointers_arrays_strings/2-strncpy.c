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
	int x;
	int j;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	for (j = 0; j < n; j++)
	{
		if (j >= x)
			dest[i] = '\0';
		else
			dest[i] = src[j];
		i++;
	}
	return (dest);
}
