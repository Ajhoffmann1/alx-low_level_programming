#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point of the crtchr
 * @s: input
 * @c: input
 * Return: just 0 (success)
 */
char *_strchr(char *s, char c)
{
	int z;
	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
			return (s + z);
	}
	return (NULL);
}
