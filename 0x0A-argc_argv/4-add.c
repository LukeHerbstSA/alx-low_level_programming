#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
	* main - int function
	* Description: adds up every int passed to function
	* @argc: number of elements in argv
	* @argv: array of args
	* Return: Always 0 (Success)
	*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	res = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
					break;
			}
			if (argv[i][j] == '\0')
				res = res + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
		printf("0\n");
}
