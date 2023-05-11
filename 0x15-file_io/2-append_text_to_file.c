#include "main.h"

/**
 * append_text_to_file - the text is extended of the files
 * @filename: the name of the file is taken by the pointer
 * @text_content: the end of the file has a string of increase
 * Return: 1 function fails else filename is NULL -1.
 * -1,if the user do not exit there is lack of permissions.
 *  else 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int up, down, len_for = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len_for = 0; text_content[len_for];)
			len_for++;
	}
	up = open(filename, 0_WRONLY | O_APPEND);
	down = write(up, text_context, len_for);
	if (up == -1 || down == -1)
		return (-1);
	close(up);
	return (1);
}
