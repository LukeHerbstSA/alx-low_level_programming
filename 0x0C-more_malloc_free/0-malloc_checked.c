#include <stdlib.h>

/**
	* malloc_checked - void function
	* Description: allocates b bytes of mem to a returned ptr
	* @b: passed memory to be allocated to ptr
	* Return: void ptr
	*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
