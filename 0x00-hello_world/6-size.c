#include <stdio.h>
/**
 * main - D,F prints other types on computer and complied and run
 * Return: 0(success)
 */
int main(void)
{
	char d;
	int e;
	long int f;
	long long int g;
	float h;

	printf("size oof char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("size of a long long int: %lu byte(s)\n" (unsigned long)sizeof(g));
	printf("size of the float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
