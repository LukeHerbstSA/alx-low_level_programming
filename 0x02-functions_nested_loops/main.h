#include <stdio.h>
#ifndef FUNCTIONS_HEADER_H
#define FUNCTIONS_HEADER_H
/**
	* print_alphabet - void function
	* Description: prints the alphabet
	* Return: void
	*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
		putchar(i);
}

/**
	* print_alphabet_x10 - returns the alphabet
	* Description: uses a loop to print the alphabet 10 times
	* Return: Always 0 (Success)
	*/
void print_alphabet_x10(void)
{
	int rows;
	int i;
	for (rows = 0; rows <= 10; rows++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
        }
}

/**
	* int_islower(int c) - this will check if c is within the lowercase range
	* Parameter - c
	* Return: Always 0 (Success)
	*/
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return (0);
}

/**
	* isalpha - prototype function checker
	* Description: this part of the program evaluates the conditions
	* Parameter: c - is the number
	* Return: Always 0 (Success)
	*/
int isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	return (0);
}

/**
	* print_sign(int c)
	* Description: This program returns various things based on the sign of int c
	* Parameter: c, an int
	* Return: 0, 1, -1
	*/
int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return(0);
	}	
}

/**
	* add - int function
	* Description: adds two numbers
	* Parameter: int, int
	* return (0)
	*/
int add(int a, int b)
{
	int res;
	res = a + b;
	return res;
}

/**
        * print_to_98 - this function uses the appropriate loop for the number n
        * Description: N/A
        * Parameter: c
	* Return: void
        */
void print_to_98(int n)
{
        if (n > 98)
        {
                while (n > 98)
		{
                        printf("%d", n);
                        printf(", ");
			n -= 1;
		}
        }
        if (n < 98)
        {
                while (n < 98)
                {
                        printf("%d", n);
                        printf(", ");
			n += 1;
                }
        }
        printf("98");
}
#endif 
