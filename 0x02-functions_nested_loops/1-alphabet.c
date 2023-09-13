#include <stdio.h>
#ifndef PRINT_ALPHABET.H

/**
	* main - Entry point
	* Description: calls a function
	* Retrun: Always 0 (Success)
	*/
void print_alphabet(void);
int main(void)
{
	void print_alphabet();
	putchar('\n');
	return (0);
}
/**
	* print_alphabet - void function
	* Description: prints the alphabet
	* Return: void
	*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
}
