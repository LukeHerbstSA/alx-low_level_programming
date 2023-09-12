#include <stdio.h>
/**
	* main - Entry point
	* Description: this program prints natural numbers from n to 98
	* Return: Always 0 (Success)
	*/
void print_to_98(int n);
int main(void)
{
	print_to_98(n);
	putchar('\n');
	return (0);
}
/**
	* print_to_98 - this function uses the appropriate loop for the number n
	* Description: N/A
	* Parameter: c
	*/
void print_to_98(int n)
{
	if (n > 98);
	{
		for (; n != 98; n--)
			printf("%d", n);
			printf(" ");
	}
	else if (n < 98);
	{
		for (; n != 98; n++)
		{
			printf("%d", n);
			printf(" ");
		}
	}
	printf("98");
}
