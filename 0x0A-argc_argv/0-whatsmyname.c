#include "main.h"

/**
	* _my_name - void function
	* Description: prints its own file name
	* @argv: pointer to array of arguments passed to prog
	*/
void _my_name(int argc, char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');
}
