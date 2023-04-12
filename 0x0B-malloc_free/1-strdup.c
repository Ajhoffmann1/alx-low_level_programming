#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: thr dtring duplicated
 */

char *_strdup(char *str)
{
	int h = 0, f = 1;
	char *v;

	if (str == NULL)
		return (NULL);
	while (str[f])
	{
		f++;
	}
	v = malloc((sizeof(char) * f) + 1);
	if (v == NULL)
		return (NULL);
	while (h < f)
	{
		v[h] = str[h];
		h++;
	}
	v[h] = '\0';
	return (v);
}
