#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
	* malloc_checked - void function
	* Description: allocates b bytes of mem to a returned ptr
	* @b: passed memory to be allocated to ptr
	* Return: None
	*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
}
