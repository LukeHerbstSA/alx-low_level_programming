#include "main.h"

/**
	* append_text_to_file - int function
	* Description: appends text_content to passed file
	* @filename: name of file
	* @text_content: text to be copied
	* Return: 1 for success, else -1
	*/
int append_text_to_file(const char *filename, char *text_content)
{
	int wr_check;
	int stream;
	int nbytes;

	nbytes = 0;
	if (filename == NULL)
		return (-1);
	stream = open(filename, O_WRONLY | O_APPEND);
	if (stream != -1)
	{
		if (text_content != NULL)
		{
			while (text_content[nbytes] != '\0')
				nbytes++;
			wr_check = write(stream, text_content, nbytes);
			if (wr_check == -1)
				return (-1);
		}
	}
	else
		return (-1);
	return (1);
}
