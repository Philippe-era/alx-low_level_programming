
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer_info;

	buffer_info = malloc(sizeof(char) * 1024);

	if (buffer_info == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_info);
}

/**
 * close_file - Closes the files
 * @fd: The file descriptor that will be closed
 */
void close_file(int fd)
{
	int c_file;

	c_file = close(fd);

	if (c_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file a new file
 * @argc: number of parameters in the file
 * @argv: array of pointers in the arguement
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int location, to_file, read_file, write_file;
	char *buffer_info;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_info = create_buffer(argv[2]);
	location = open(argv[1], O_RDONLY);
	read_file = read(location, buffer_info, 1024);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (location == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer_info);
			exit(98);
		}

		write_file = write(to_file, buffer_info, read_file);
		if (to_file == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer_info);
			exit(99);
		}

		read_file = read(location, buffer_info, 1024);
		to_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer_info);
	close_file(location);
	close_file(to_file);

	return (0);
}


