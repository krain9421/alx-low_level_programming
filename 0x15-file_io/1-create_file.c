#include "main.h"

/**
* create_file - creates a file
* @filename: name of file
* @text_content: text to be written into file
* Return: 1 if successful
* -1 if failed
*/

int create_file(const char *filename, char *text_content)
{
	int fdes = 0, letters = 0, wrt = 0;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdes < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[letters])
		letters++;

	wrt = write(fdes, text_content, letters);
	if (wrt < 0)
		return (-1);

	close(fdes);

	return (1);
}

