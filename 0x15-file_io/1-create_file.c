#include "main.h"
#include <stdio.h>

/**
 * create_file - A file is created.
 * @filename: This create a file that uses a pointer to point to the name
 * @text_content: a file is written to the pointer that takes a string.
 * Return: -1 fails
 * else 1.
 */

int create_file(const char *filename, char *text_content)
{
	int l, ss, h = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (h = 0; text_content[h];)
			h++;
	}
	l = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ss = write(l, text_content, h);
	if (l == -1 || ss == -1)
		return (-1);
	close(l);
	return (1);
}
