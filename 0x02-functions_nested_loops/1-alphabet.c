#include <stdio.h>
#include "main.h"
/**
	* print_alphabet - void function
	* Description: prints the alphabet
	* Return: Always 0 (Success)
	*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
	return (0);
}
/**
	* main - Entry point
	* Description: serves as the start of the program and calls a function
	* Return: Always 0 (Success)
	*/
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
