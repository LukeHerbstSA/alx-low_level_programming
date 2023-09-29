#include <stdio.h>

/**
	* _my_name - void function
	* Description: prints its own file name
	* @argc: number of elements in argv
	* @argv: pointer to array of arguments passed to prog
	*/
void _my_name(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
}
