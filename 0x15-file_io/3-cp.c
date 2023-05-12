#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - The buffering has an allocation of 1024 bytes.
 * @file: The name of file for buffering has a character to store.
 * Return: A buffer to allocate a new pointer.
 */

char *create_buffer(char *file)
{
	char *ss;

	ss  = malloc(sizeof(char) * 1024);

	if (ss == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (ss);
}
/**
 * close_file - There is an enclose in the description
 * @fd: there is enclose in the description of a file
 */

void close_file(int fd)
{
	int leo;

	leo = close(fd);

	if (leo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the content is been copied to another file
 * @argc: There is a supplied of an amount arguments
 * @argv: there is an argument of an array that takes pointers
 * Return: 0 success
 * Description: -exit code 97 inspect or compute the argv if wrong
 * -exit code 98 file_from, doesnt exit or invisible
 *  The -exit code 99 file_to cant be written.
 *  The exit code 100 for both file_to or file_from cant be discontinue.
 */

int main(int argc, char *argv[])
{
	int go, agree, l, jj;
	char *ss;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ss = create_buffer(argv[2]);
	go = open(argv[1], O_RDONLY);
	l = read(go, ss, 1024);
	agree = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (go == -1 || l == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cant read from file %s\n", argv[1]);
			free(ss);
			exit(98);
		}

		jj = write(agree, ss, l);
		if (agree == -1 || jj == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cant write to %s\n", argv[1]);
			free(ss);
			exit(99);
		}

		l = read(go, ss, 1024);
		agree = open(argv[2], O_WRONLY | O_APPEND);
	} while (l > 0);

	free(ss);
	close_file(go);
	close_file(agree);

	return (0);
}
