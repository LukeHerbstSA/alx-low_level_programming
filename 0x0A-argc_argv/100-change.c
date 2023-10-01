#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
	* main - int function
	* Description: prints min num of cents to reach a passed int
	* @argc: num of elements in argv
	* @argv: array of args passed to function
	* Return: 0 if successful, 1 if not
	*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int cents;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents > 0)
			printf("%d", counter(cents));
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
	* counter - int function
	* Description: matches a passed cash amount with cents
	* @cents: passed cash amount (in cents)
	* Return: Number of coins (int coins)
	*/
int counter(int cents)
{
	int coins;

	coins = 0;
	while (cents >= 25)
	{
		cents = cents - 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents = cents - 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents = cents - 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents = cents - 2;
		coins++;
	}
	if (cents == 1)
	{
		cents = cents - 1;
		coins++;
	}
	return (coins);
}
