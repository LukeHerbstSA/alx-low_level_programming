#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
	* print_dog - void func
	* Description: prints the members of an instance of dog
	* @d: struct pointer
	*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
}
