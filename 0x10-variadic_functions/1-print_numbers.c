#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of the numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mms;
	unsigned int in;

	va_start(mms, n);
	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(mms, int));
		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mms);
}
