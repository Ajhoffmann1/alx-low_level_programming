#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int e = 0;
	int h = 0;
	char temp;

	while (*(n + e) != '\0')
	{
		e++;
	}
	e--;

	for (h = 0; h < e; h++, e--)
	{
		temp = *(n + h);
		*(n + h) = *(n + e);
		*(n + e) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text represebtation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: point er to calling fumction
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, e = 0, h = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + e) != '\0')
		e++;
	while (*(n2 + h) != '\0')
		h++;
	e--;
	h--;
	if (h >= size_r || e >= size_r)
		return (0);
	while (h >= 0 || e >= 0 || overflow == 1)
	{
		if (e < 0)
			val1 = 0;
		else
			val1 = *(n1 + 1) - '0';
		if (h < 0)
			val2 = 0;
		else
			val2 = *(n2 + h) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digitd >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		h--;
		e--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
