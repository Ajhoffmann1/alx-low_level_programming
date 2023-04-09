#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: just zero
 */

int main(int argc, char *argv[])
{
	int le1 = 0, le2 = 0;

	if (argc == 3)
	{
		le1 = atoi(argv[1]);
		le2 = atoi(argv[2]);
		printf("%d\n", le1 * le2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
