#include <stdio.h>
#include <stdlib.h>
/**
	* str_concat - char function
	* Description: concatenates s1 to s2 with '\0'
	* @s1: first array
	* @s2: array to have contents copied to s1
	* Return: pointer to concatted array or NULL
	*/
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ar = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (ar != NULL)
	{
		len = 0;
		while (s1[len] != '\0')
			len++;
		for (i = 0; i < len; i++)
			ar[i] =  s1[i];
		len = 0;
		while (s2[len] != '\0')
			len++;
		for (j = 0; j < len; j++)
		{
			ar[i] = s2[j];
			i++;
		}
		ar[i] = '\0';
		return (ar);
	}
	else
		return (NULL);
}
