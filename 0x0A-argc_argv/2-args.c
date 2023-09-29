#include <stdio.h>

/**
	* main - int function
	* Description: prints all the passed args
	* @argc: num of elements in argv
	* @argv: array of passed args
	* Return: Always 0 (Success)
	*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i != argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
