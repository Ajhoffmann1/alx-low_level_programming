#include <stdio.h>
#include <stdlid.h>
#include <time.h>

/**
 * main - entering point 
 *
 * Return: just 0(success)
 */
int main(void)
{
	int a, x;

	for (a = '0'; a < '9'; a++)
	{
		for (x = a + 1; x <= '9'; x++)
		{
			if (x != a)
			{
				putchar(a);
				putchar(x);
				if (a == '8' && x == '9')
					continue;
				putchar(' ');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
