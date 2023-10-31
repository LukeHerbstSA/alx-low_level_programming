#include "main.h"

/**
	* cp - int func
	* Description: prints content from one file to another
	* @argc: num of args
	* @argv: string array of args
	* Return: exit codes 97-100 on fail or 0 (success)
	*/
unsigned int cp(int argc, char *argv[])
{
	char text[1024];
	int close_check;
	int file_from;
	int file_to;

	if (argc != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n")
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	if (file_to == -1)
	{
		if (close(file_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", file_from);
			exit(100);
		}
		close(file_from);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	
}
