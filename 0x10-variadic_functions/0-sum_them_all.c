#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: The number of parameters passed to the fuction.
 * @....: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pp;
	unsigned int k, sum = 0;

	va_start(pp, n);
	for (k = 0; k < n; k++)
		sum += va_arg(pp, int);
	va_end(pp);

	return (sum);
}
