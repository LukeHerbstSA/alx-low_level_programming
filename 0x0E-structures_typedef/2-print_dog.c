#include "dog.h"
#include <stdlib.h>

/**
	* print_dog - void func
	* Description: prints the members of an instance of dog
	* @d: struct pointer
	*/
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).age == NULL)
		(*d).age = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
}
