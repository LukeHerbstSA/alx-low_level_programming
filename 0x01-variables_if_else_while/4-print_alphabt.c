#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses putchar to print a string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' && alpha != 'q' && alpha != 'e'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

