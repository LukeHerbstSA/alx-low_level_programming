#include <stdio.h>
#include "main.h"
/**
	* main - Entry point
	* Description:
	* Return: Always 0 (Success)
	*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
/**
	* print_alphabet - returns the alphabet
	* Description: uses a loop to print the alphabet 10 times
	* Return: Always 0 (Success)
	*/
void print_alphabet(void)
{
	for (int rows = 0; rows <= 10; rows++)
	{
		for (int i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}
