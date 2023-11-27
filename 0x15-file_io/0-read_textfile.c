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
	ssize_t readchars;
	ssize_t charsprinted;
	char *buffer;
	int stream;

	if (filename == NULL || letters == 0)
		return (0);
	stream = open(filename, O_RDONLY);
	if (stream == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer != NULL)
	{
		readchars = read(stream, buffer, letters);
		if (charsread != -1)
		{
			charsprinted = write(STDOUT_FILENO, buffer, readchars);
			free(buffer);
			close(stream);
			if (charsprint != readchars)
				return (0);
		}
		else
		{
			free(buffer);
			return (0);
		}
	}
	else
	{
		free(buffer);
		return (0);
	}
	return (charsprinted);
}
