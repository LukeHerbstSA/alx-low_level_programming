#include "main.h"
#include <stdlib.h>

/**
	* string_nconcat - char function
	* Description: concats n bytes from s2 to s1
	* @s1: passed string1
	* @s2: passed string2
	* @n: number of bytes from beginning to n of s2
	* Return: char pointer to s1+s2
	*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while ((j < n) && (s2[j] != '\0'))
		j++;
	ptr = malloc(sizeof(char) + i + j);
	if (ptr != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (j = 0; (j < n) && (s2[j] != '\0'); j++)
		{
			ptr[i] = s2[j];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
