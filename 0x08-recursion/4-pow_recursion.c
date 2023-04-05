#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the values to multiply
 * @y: the time to muliply the value
 * Return: the value multiply y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
