#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int k = 0;
	char *v, *code = "";
	va_list lls;

	va_start(lls, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", code, va_arg(lls, int));
					break;
				case 'i':
					printf("%s%d", code, va_arg(lls, int));
					break;
				case 'f':
					printf("%s%f", code, va_arg(lls, double));
					break;
				case 's':
					v = va_arg(lls, char *);
					if (!v)
						v = "(nil)";
					printf("%s%s", code, v);
					break;
				default:
					k++;
					continue;
			}
			code = ", ";
			k++;
		}
	}
	printf("\n");
	va_end(lls);
}
