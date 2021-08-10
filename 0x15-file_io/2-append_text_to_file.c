#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, OP, WR;

	OP = open(filename, O_WRONLY | O_APPEND);
	if (OP == EOF)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (text_content)
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
