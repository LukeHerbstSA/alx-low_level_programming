#include <stdio.h>
#include "main.h"
/**
	* main - Entry point
	* Description: calls print_alphabet
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
	* print_alphabet - prototype function
	* Description: prints the alphabet
	* Return: Always 0 (Success)
	*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
}
