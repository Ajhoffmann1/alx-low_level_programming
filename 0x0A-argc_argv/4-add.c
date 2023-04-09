#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: just zero
 */

int main(int argc, char *argv[])
{
	int k;
	unsigned int z, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			e = argv[k];
			for (z = 0; z < strlen(e); z++)
			{
				if (e[z] < 48 || e[z] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
