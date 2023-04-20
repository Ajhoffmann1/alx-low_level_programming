#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own opcodes
 * @argc: number of arguments
 * @argv: array of aarguments
 * Return: just 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, k;

	char *aa;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		prints("Error\n");
		exit(2);
	}
	aa = (char *)main;
	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", aa[k];
			break;
		}
		printf("%02hhx", aa[k];
	}
	return (0);
}
