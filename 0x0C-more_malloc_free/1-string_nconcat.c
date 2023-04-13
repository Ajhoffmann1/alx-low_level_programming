#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 * Return: ...
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int o = 0, p = 0, q = 0, r = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[o])
		o++;
	while (s2[q])
		q++;
	if (n >= q)
		r = o + q;
	else
		r = o + n;
	str = malloc(sizeof(char) * r + 1);
	if (str == NULL)
		return (NULL);
	q = 0;
	while (p < r)
	{
		if (p <= o)
			str[p] = s1[p];
		if (p >= o)
		{
			str[p] = s2[q];
			q++;
		}
		p++;
	}
	str[p] = '\0';
	return (str);
}
