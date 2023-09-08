#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses putchar to print a string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	char array;

	for (array = 'z'; array >= 'a'; array--)
		putchar(array);
	putchar('\n');
	return (0);
}
