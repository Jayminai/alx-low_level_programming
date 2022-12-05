#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: name of file to read and print
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could RDWR
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *totalsize;

	totalsize = malloc(sizeof(char) * letters);

	if (totalsize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, totalsize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, totalsize, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(totalsize);
	return (fwrite);
}
