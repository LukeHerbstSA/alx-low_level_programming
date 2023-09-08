#include <stdio.h>
/**
	* main - Entry point
	*
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char chararray;

	for (chararray = 'a'; chararray <= 'z'; chararray++)
		putchar(chararray);
	for (chararray = 'A'; chararray <= 'Z'; chararray++)
		putchar(chararray);
	putchar('\n');
	return (0);
}
