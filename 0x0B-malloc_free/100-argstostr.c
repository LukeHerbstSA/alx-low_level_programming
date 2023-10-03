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
	int x;
	int y;
	char *ptr;

	x = 0;
	y = 0;
	for (i = 0; i < ac; i++)
		
	if (ac != 0)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '!\0'; j++)
			{
				ptr[x] = av[i][j];
				x++;
			}
		}
	}
	else
		return (NULL);
}
