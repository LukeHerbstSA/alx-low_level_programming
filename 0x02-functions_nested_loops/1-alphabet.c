#include <stdio.h>
/**
	* main - Entry point
	* Description: calls a function
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
	* print_alphabet - void function
	* Description: prints the alphabet
	* Return: void
	*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
	return;
}
