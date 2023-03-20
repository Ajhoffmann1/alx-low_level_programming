#include <stdio.h>

/**
 * main -Entry point
 * description: Write a program that prints all possible 
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int firstdigit = 0, seconddigit;

	while (firstgigit <= 99)
	{
		secondigit = firstdigit;
		while (seconddigit <= 99)
		{
			if (seconddigit != firstdigit)
		{
			putchar((firstdigit / 10) + 48);
			putchar((firstdigit % 10) + 48);
			putchar(',');
			putchar((seconddigit / 10) + 48);
			putchar((seconddigit % 10) + 48);

			if (firstdigit != 98 || seconddigit != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
			seconddigit++;
		}
		firstdigit++;
	}
	putchar('\n');

	return (0);
}

