#include "main.h"

/**
	* swap_int - takes 2 pointers
	* Description: swaps the values of two inputted integers
	* @a: int pointer
	* @b: int pointer
	*/
void swap_int(int *a, int *b)
{
	int num1;
	int num2;

	num1 = *a;
	num2 = *b;
	*a = num2;	
	*b = num1;
	return (0);
}
