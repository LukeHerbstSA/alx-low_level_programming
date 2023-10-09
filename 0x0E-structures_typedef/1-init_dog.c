#include <stdlib.h>
#include "dog.h"

/**
	* init_dog - void func
	* Description: initializes a variable of struct dog
	* @d: address of instance of struct dog
	* @name: name of dog
	* @age: age of dog
	* @owner: owner of dog
	*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = {name, age, owner};
}
