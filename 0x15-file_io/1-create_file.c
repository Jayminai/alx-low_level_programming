#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fwrite, file, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		fwrite = write(file, text_content, len);

		if (fwrite == -1)
			return (-1);
	}
	close(file);
	return (1);
}
