#include "main.h"

/**
* read_textfile - reads a text file and prints the letters
* @filename: name of file
* @letters: numbers of letters to  be printed
* Return: numbers of letters printed
* 0 if failure occurs
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes = 0;
	char *buf;
	ssize_t rd, wrt;

	if (filename == NULL)
		return (0);

	fdes = open(filename, O_RDONLY);
	if (fdes < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	rd = read(fdes, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	close(fdes);
	free(buf);

	return (wrt);
}

