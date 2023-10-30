#include "main.h"

/**
	* read_textfile - ssize_t func
	* Description: reads file
	* @filename: passed ptr to name of file
	* @letters: num of letters to read & print
	* Return: number of prints able to be printed
	*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fileptr;
	size_t i;

	i = 0;
	if (filename != NULL)
		return (0);
	fileptr = fopen(filename, "r");
	if (fileptr != NULL)
	{
		while(i < letters)
		{
			if (feof(fileptr))
				break;
			putchar(fgetc(fileptr));
			i++;
		}
	}
	else
		return (0);
	fclose(fileptr);
	return (i);
}
