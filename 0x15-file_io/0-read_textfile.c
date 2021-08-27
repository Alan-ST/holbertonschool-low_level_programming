#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file
 * @letters: text
 * Return: chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t OP, RD, WR;
	char *s;

	if (filename == NULL)
		return (0);
	OP = open(filename, O_RDONLY);
	if (OP == EOF)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);
	RD = read(OP, s, letters);
	if (RD == EOF)
	{
		free(s);
		return (0);
	}
	WR = write(STDOUT_FILENO, s, RD);
	if (WR == EOF)
	{
		free(s);
		return (0);
	}
	free(s);
	close(OP);
	return (RD);
}
