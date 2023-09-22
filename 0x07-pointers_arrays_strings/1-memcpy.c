char *_memcpy(char *dest, char *src, unsigned int n)#include "main.h"

/**
	* _memcpy - char function
	* Description: copies src area and overwrites
	* @dest:
	* @src:
	* @n:
	* Return: 
	*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
