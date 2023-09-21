#include "main.h"

/**
	* _strncat - return char
	* Description: return pointer to dest
	* @dest: array to be concatenated to
	* @src: source array
	* @n: int bytes to take from src
	* Return: pointer to dest
	*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n &&  src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
