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
	int charsread;
	int charsprint;
	char *holder;
	size_t i;
	int stream;

	i = 0;
	if (filename != NULL)
		return (0);
	stream = open(filename, 0);
	holder = malloc(sizeof(char) * letters);
	if (stream != -1 && holder != NULL)
	{
		charsread = read(stream, holder, letters);
		if (charsread != -1)
		{
			charsprint = write(STDOUT_FILENO, holder, charsread);
			free(holder);
			close(stream);
			if (charsprint != charsread)
				return (0);
		}
		else
		{
			free (holder);
			return (0);
		}
	}
	else
		return (0);
	return (charsprint);
}