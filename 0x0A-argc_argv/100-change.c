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
	int cents;
	int coins;

	coins = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		counter(cents, coins);
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
	* Description: returns num of coins to match cents
	* @cents: amount to be paid back
	* @coins: amount of coins to reach cents
	* Return: void
	*/
void counter(int cents, int coins)
{
	if (cents <= 0)
	{
		printf("0\n");
		return;
	}
	if (cents > 0)
	{
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
			cents = cents  - 2;
			coins++;
		}
		if (cents == 1)
		{
			cents = cents - 1;
			coins++;
		}
	}
	printf("%d", coins);
}
