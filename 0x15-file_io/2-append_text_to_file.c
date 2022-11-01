#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of file
* @text_content: text to append
*
* Return: 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fdes = 0, letters = 0, wrt = 0;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[letters])
			letters++;

		wrt = write(fdes, text_content, letters);
		if (wrt < 0)
			return (-1);
	}
	close(fdes);

	return (1);
}

