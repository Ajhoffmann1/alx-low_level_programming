#include "main.h"
#include <unistd.h>

/**
 * _putchar - the file description takes the charater c
 * @c: the inscribed charater
 * Return: just success 1.
 * maybe errors, -1 is returned, and error is set earlier on'
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
