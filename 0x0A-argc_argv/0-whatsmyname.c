#include "main.h"

/**
	* _my_name - void function
	* Description: prints its own file name
	* @argv: pointer to array of arguments passed to prog
	*/
void _my_name(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
}
