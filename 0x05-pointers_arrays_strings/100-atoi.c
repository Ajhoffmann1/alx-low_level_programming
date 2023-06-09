#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer to convert it
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int mn = 1, isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			mn *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= mn;
	return (ni);
}
