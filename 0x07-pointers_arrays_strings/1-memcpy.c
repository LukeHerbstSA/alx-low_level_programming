#include "main.h"

/**
	* _memcpy - char function
	* Description: copies src area and overwrites
	* @dest: array to be overwritten
	* @src: sample array
	* @n: number of elements to take
	* Return: updated array dest
	*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
