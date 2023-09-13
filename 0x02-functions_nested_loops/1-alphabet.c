#include <stdio.h>

void print_alphabet();

/**
	* main - Entry point
	* Description: calls a function
	* Return: Always 0 (Success)
	*/
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
}
