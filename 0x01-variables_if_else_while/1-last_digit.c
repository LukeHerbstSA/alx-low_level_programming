#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses printf to print a char string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}
