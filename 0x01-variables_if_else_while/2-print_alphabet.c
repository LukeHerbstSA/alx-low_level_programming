#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses putchar to print a string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char chararray;

	for (chararray = 'a'; chararray < 'z'; chararray++)
		putchar(chararray);
	return (0);
}
