#include <stdio.h>
#include <stdlib.h>

/**
	* _strdup - char function
	* Description:
	* @str: passed string
	* Return: pointer to char
	*/
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
			i++;
		ptr = malloc(i * sizeof(char) + 1);
		if (ptr != NULL)
		{
			for (j = 0; j < i; j++)
				ptr[j] = str[j];
			ptr[j] = '\0';
		}
		else
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	else
		return (NULL);
}
