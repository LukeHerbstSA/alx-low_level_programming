#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
	* strtow - char function
	* Description: splits a string into words by open spaces(**ptr)
	* @str: passed string
	* Return: pointer to array of strings
	*/
char **strtow(char *str)
{
	char **ptr;
	int i;
	int j;
	int x;
	int y;
	int size;
	int arsize;

	arsize = 1;
	x = 0;
	if (str == NULL || str[0] == ' ')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			arsize++;
	}
	ptr = malloc(arsize * sizeof(*ptr) + 1);
	if (ptr != NULL)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
				size++;
			else
			{
				ptr[x] = malloc(size * sizeof(char) + 1);
				if (ptr[x] != NULL)
					x++;
				else
					return (NULL);
			}
		}
	}
	else
		return (NULL);
	return (_ar_maker(str, ptr));
}

/**
	* _ar_maker - char function
	* Description: creates a 2d array of strings seperated by spaces in str
	* @str: passed array
	* @ptr: passed 2d array
	* Return: pointer to 2D array
	*/
char **_ar_maker(char *str, char **ptr)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
		{
			ptr[i][x] = '\0';
			i++;
		}
		else
		{
			ptr[i][x] = str[j];
			x++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}
