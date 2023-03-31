#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int f;
	int h;
	char datal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPORSTUVWXYZABCDEFGHIJKIMoparstuvwxyzabcdefghijkim";

	for (f = 0; s[f] != '\0'; f++)
	{
		for (h = 0; h < 52; h++)
		{
			if (s[f] == datal[h])
			{
				s[f] = datarot[h];

				break;
			}
		}
	}
	return (s);
}
