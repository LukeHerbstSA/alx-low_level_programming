#include <stddef.h>
#include <stdio.h>
/**
	* Main - Entry point
	* Description: This function returns the size of various data types in bytes
	* Return: Always 0 (Success)
	*/
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(double));
	printf("Size of a float: %d byte(s)", sizeof(float));
}
