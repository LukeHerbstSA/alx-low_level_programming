#include <stdio.h>
#include <stdlib.h>
/**
	* argstostr - char function
	* Description:
	* @ac: int num of args
	* @av: array of passed args
	* Return: pointer to concatted array
	*/
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int size;
	int x;
	char *ptr;

	size = 0;
	if (ac != 0)
	{
		for (i = 0; i < ac; i++)
		{
			if (av[i] == NULL)
				return (NULL);
			for (j = 0; av[i][j] != '\0'; j++)
				size++;
		}
	}
	else
		return (NULL);
	ptr = malloc(size * sizeof(char) + ac + 1);
	x = 0;
	if (ptr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr[x] = av[i][j];
				x++;
			}
			ptr[x] = '\n';
			x++;
		}
		ptr[x] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
