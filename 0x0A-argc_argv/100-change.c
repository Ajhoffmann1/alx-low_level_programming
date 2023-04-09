#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument
 * Return: if the number of argument is not exactly one -1
 * else -0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf ("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
