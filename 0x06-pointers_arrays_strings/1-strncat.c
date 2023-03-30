#include "main.h"

/**
 * _strncat - concatentes two strings
 * an inputted number of bytes from src
 * @dest: The string to be appended
 * @src: The number of bytes from scr to be appended
 * @n: The number of bytes to src
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
