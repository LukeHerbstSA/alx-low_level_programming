#include <stdio.h>

/**
	* main - int function
	* Description: prints the num of elements in argv
	* @argc: num of elements in argv
	* @argv: passed array of program args
	* Return: Always 0 (Success)
	*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
