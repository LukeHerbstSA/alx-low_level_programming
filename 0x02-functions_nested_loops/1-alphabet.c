#include <stdio.h>
#include "main.h"
#ifndef MAIN_H
#define MAIN_H
#endif
/**
	* print_alphabet - void function
	* Description: prints the alphabet
	* Return: Always 0 (Success)
	*/
void print_alphabet(void);
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
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
