#include <stdio.h>
#include <stdlib.h>

/**
	* print_name - void func
	* Description: prints passed string arg using pointer
	* @name: passed string name
	* @f: passed pointer to void func (takes string arg)
	*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
	else
		return;
}
