#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: num
 * @argv: value
 * Return: 0
 */
int main(int argc, char *argv)
{
    ssize_t RD, WR;
    int file, newfile;
    char buff[BUFF];

    if (argc != 3)
        dprintf(STDERR_FILENO, "Usage: cp file newfile\n");
		exit(97);
    file = open(argv[1], O_RDONLY);
    if (file == EOF)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	newfile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (newfile == EOF)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);    
    while (RD == BUFF)
    {
        RD = read(file, buff, BUFF);
        WR = write(newfile, buff, RD);
    }
	if (RD == EOF)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	if (WR == EOF)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
	if (close(file) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
        exit(100);
	if (close(newfile) == EOF)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", newfile);
        exit(100);
	return (0);
}