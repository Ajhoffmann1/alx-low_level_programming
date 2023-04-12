#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int g = 0, u = 0, h = 0, t = 0;
	char *v;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[g])
		g++;
	while (s2[u])
		u++;
	t = g + u;
	v = malloc((sizeof(char) * t) + 1);
	if (v == NULL)
		return (NULL);
	u = 0;
	while (h < t)
	{
		if (h <= g)
			v[h] = s1[h];
		if (h >= g)
		{
			v[h] = s2[u];
			u++;
		}
		h++;
	}
	v[h] = '\0';
	return (v);
}
