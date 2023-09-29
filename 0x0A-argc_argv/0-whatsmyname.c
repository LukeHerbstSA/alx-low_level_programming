#include <stdio.h>

/**
	* main - Prints its own file name
	* @argc: num of elements in argv
	* @argv: pointer to an array of the supplied string args
	* Return: Always 0 (Success)
	*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
