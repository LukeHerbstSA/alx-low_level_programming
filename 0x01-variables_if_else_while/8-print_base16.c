#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses putchar to print a string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int num;
	char array;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);
	for (array = 'a'; array <= 'f'; array++)
		putchar(array)
	putchar('\n');
	return (0);
}
