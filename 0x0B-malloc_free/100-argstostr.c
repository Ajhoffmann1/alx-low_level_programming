#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the programs passed to the program to string
 * @ac: the argument count
 * @av: the argument vecto
 * Return: ...
 */

char *argstostr(int ac, char **av)
{
	int yy = 0, l = 0, e = 0, o = 0;
	char *v;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (l < ac)
	{
		while (av[l][e])
		{
			yy++;
			e++;
		}
		e = 0;
		l++;
	}
	v = malloc((sizeof(char) * yy) + ac + 1);
	l = 0;
	while (av[l])
	{
		while (av[l][e])
		{
			v[o] = av[l][e];
			o++;
			e++;
		}
		v[o] = '\n';
		e = 0;
		o++;
		l++;
	}
	o++;
	v[o] = '\0';
	return (v);
}
