#include "main.h"

/**
	* create_file - int func
	* Description: writes passed text_content to filename passed
	* @filename: passed name of file to be overwritten or created
	* @text_content: text to be copied to file
	* Return: 1 on success or -1 on all fails
	*/
int create_file(const char *filename, char *text_content)
{
	int text_bytes;
	int stream;
	int wr_success;

	text_bytes = 0;
	if (filename == NULL)
		return (-1);
	stream = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (stream != -1)
	{
		if (text_content == NULL)
			text_content = "";
		while (text_content[text_bytes] != '\0')
			text_bytes++;
		wr_success = write(stream, text_content, text_bytes);
		if (wr_success < 0)
			return (-1);
	}
	else
		return (-1);
	close(stream);
	return (1);
}
