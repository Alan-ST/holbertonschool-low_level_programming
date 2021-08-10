#include "main.h"
/**
 * create_file - 
 * @filename: file
 * @text_content: text
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t OP, WR;
	int i = 0;

	if (filename == NULL)
		return (-1);
	OP = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (OP == EOF)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	WR = write(OP, text_content, i);
	if (WR == EOF)
		return (-1);
	close(OP);
	return (1);
}
