#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - print a read file
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: W- actual number of bytes read and printed
 * 0 if the function fails or file name is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);
	return  (w);
}
