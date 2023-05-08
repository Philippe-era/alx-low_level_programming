#include "main.h"

/**
 * append_text_to_file – APPENDS text files together making it one
 * @filename: pointer to name
 * @text_content: The string to concatenate
 *
 * Return: function fails return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;
	int reject = -1;
	int pass = 1;

	if (filename == NULL)
		return (reject);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
		return (reject);

	close(open_file);

	return (pass);
}


