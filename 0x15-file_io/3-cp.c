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
	int gen_check;
	int file_from;
	int file_to;

	if (argc != 3)
	{
		error_handler(-1, -1, NULL);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_from == -1)
		error_handler(0, -1, argv[1]);
	if (file_to == -1)
		error_handler(1, -1, argv[2]);
	while (gen_check == 1024)
	{
		gen_check = read(file_from, text, 1024);
		if (gen_check == -1)
			error_handler(0, -1, argv[1]);
		gen_check = write(file_to, text, gen_check);
		if (gen_check == -1)
			error_handler(1, -1, argv[2]);
	}
	gen_check = close(file_from);
	if (gen_check == -1)
		error_handler(2, file_from, NULL);
	gen_check = close(file_to);
	if (gen_check == -1)
		error_handler(2, file_to, NULL);
	return (0);
}

/**
	* error_handler - void func
	* Description: exits with appropriate exit code via issue_type num
	* @issue_type: error number
	* @file_descriptor: not always relevant, refers to stream number
	* @filename: not always relevant, holds associated filename
	*/
void error_handler(int issue_type, int file_descriptor, char *filename)
{
	if (issue_type == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
	if (issue_type == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	if (issue_type == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (issue_type == -1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
