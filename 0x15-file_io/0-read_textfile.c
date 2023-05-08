#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text to standard ouptut
 * @filename: text file being that must be read
 * @letters: characters to be read
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filed;
	ssize_t write_file;
	ssize_t text;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	text = read(filed, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(filed);
	return (write_file);
}

