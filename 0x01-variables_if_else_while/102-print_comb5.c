#include <stdio.h>
/**
	* main - Entry point
	* Description: prints a range of numbers 0 - 99 with the condition that a selection of numbers may not be repeated
	* Return: Always 0 (Success)
	*
	*/
int main(void)
{
	int num;
	int depth1;
	int depth2;
	int depth3;

	for (num = 0; num <= 9; num++)
	{
		for (depth1 = 0; depth1 <= 9; depth1++)
		{
			for (depth2 = num; depth2 <= 9; depth2++)
			{
				for (depth3 = depth1 + 1; depth3 <= 9; depth3++)
				{
					putchar('0' + num);
					putchar('0' + depth1);
					putchar(' ');
					putchar('0' + depth2);
					putchar('0' + depth3);
					if (depth1 != 8)
					{
						putchar(',');
						putchar(' ');
					}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
