#include "dog.h"
#include <stdlib.h>

/**
	* print_dog - void func
	* Description: prints the members of an instance of dog
	* @d: struct pointer
	*/
void print_dog(struct dog *d)
{
	char *error[5] = "(nil)";

	if (d[0] == NULL)
		printf("Name: %s\n", error);
	else
		printf("Name: %s\n", d[0]);
	if (d[1] == NULL)
		printf("Age: %s\n", error);
	else
		printf("Age: %f\n", d[1]);
	if (d[2] == NULL)
		printf("Owner: %s", error);
	else
		printf("Owner: %s", d[2]);
}
