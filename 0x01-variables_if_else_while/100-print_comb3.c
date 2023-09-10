#include <stdio.h>
/**
	* main - Entry point
	* Description: Uses putchar to print a string
	* Return: Always 0 (Success)
	*/
int main(void)
{
	int num;
	int subnum;

	for (num = 0; num <= 9; num++)
	{
		for (subnum = num + 1; subnum <= 9; subnum++)
		{
			putchar('0' + num);
			putchar('0' + subnum);
			if (subnum < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
