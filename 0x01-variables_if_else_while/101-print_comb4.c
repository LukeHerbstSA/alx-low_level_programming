#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses putchar to print a string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int num;
	int depth1;
	int depth2;

	for (num = 0; num <= 9; num++)
		{
		for (depth1 = num + 1; depth1 <= 9; depth1++)
			{
			for (depth2 = depth1 + 1; depth2 <= 9; depth2++)
			{
				putchar('0' + num);
				putchar('0' + depth1);
				putchar('0' + depth2);
				putchar(',');
				putchar(' ');
			}
			}
		}
	putchar('\n');
	return (0);
}
