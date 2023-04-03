#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry Point
 * @haystack: input
 * @needle: input
 * Return: just 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *on = haystack;
		char *of = needle;

		while (*on == *of && *of != '\0')
		{
			on++;
			of++;
		}
		if (*of == '\0')
			return (haystack);
	}
	return (NULL);
}
