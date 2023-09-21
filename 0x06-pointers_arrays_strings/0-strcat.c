#include "main.h"

/**
	* _strcat - returns char pointer
	* Description: concats 2nd arg to 1st arg
	* @dest: array to be copied to
	* @src: array to be copied
	* Return: pointer to dest
	*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
