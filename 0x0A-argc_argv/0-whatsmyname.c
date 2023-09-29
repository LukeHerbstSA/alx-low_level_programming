#include <stdio.h>

/**
	* _my_name - int function
	* Description: prints its own file name
	* @argc: number of elements in argv
	* @argv: pointer to array of arguments passed to prog
	* Return: 0 (Success)
	*/
int _my_name(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
