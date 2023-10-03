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
	int size1;
	int size2;
	int i;
	int j;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL && s2 != NULL)
	{
		size1 = sizeof(s1);
		size2 = sizeof(s2);
		ar = malloc(size1 + size2 + 1);
		if (ar != NULL)
		{
			for (i = 0; i < size1; i++)
				ar[i] =  s1[i];
			for (j = 0; j < size2; j++)
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
	else
		return (NULL);
}
