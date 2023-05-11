#include "main.h"
#include "stdlib.h>

/**
 * read_textfile - The STANDARDOUTPUT print a text and study a text file.
 * @filename: the text is to be study
 * @letters: It sudys the aggregate of letters
 * Return: the bytes is to studied or print w-
 * 0 for fails then filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bb;
	ssize_t l;
	ssize_t e;
	ssize_t o;

	l = open(filename, O_RDONLY);
	if (l == -1)
		return (0);
	bb = malloc(sizeof(char) * letters);
	o = read(l, bb, letters);
	e = write(STDOUT_FILENO, bb,o);
	free(bb);
	close(l);
	return (e);
}
