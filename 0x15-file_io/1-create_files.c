
#include "main.h"

/**
 * create_file - new file created
 * @filename: name of file pointed
 * @text_content: A pointer to a string
 * Return: If the function fails return reject
 */
int create_file(const char *filename, char *text_content)
{
	int filed, write_file, length = 0;
	int reject = -1;
	int pass = 1;

	if (filename == NULL)
		return (reject);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	filed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(filed, text_content, length);

	if (filed == -1 || write_file == -1)
		return (reject);

	close(filed);

	return (pass);
}

