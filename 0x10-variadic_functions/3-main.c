#include <stdio.h>
#include <stdlib.h>
#include "3-get_op_func.c"

/**
	* main - int function
	* Description: return the result of a var operation on nums
	* @argc: number of args
	* @argv: array of passed args including file name
	* Return: result of operation between a and b
	*/
int main(int argc, char *argv[])
{
	int (*result)(int, int);
	int num1;
	int num2;
	char sep;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2]);
	if (result != NULL)
	{
		sep = *(argv[2]);
		if (sep == '%' || sep == '/')
		{
			if (argv[3] == 0)
			{
				printf("Error\n");
				exit(100);
			}
		}
		printf("%d\n", result(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
