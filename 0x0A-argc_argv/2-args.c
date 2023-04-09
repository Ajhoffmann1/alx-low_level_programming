#include "main.h"
#include <stdio.h>

/**
 * main - prints all the args contents
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: just zero
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
