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

	if (str != NULL)
	{
		ptr = malloc(sizeof(str) + 1);
		if (ptr != NULL)
		{
			for (i = 0; i < sizeof(ptr); i++)
				ptr[i] = str[i];
			ptr[i] = '\0';
			return (ptr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
