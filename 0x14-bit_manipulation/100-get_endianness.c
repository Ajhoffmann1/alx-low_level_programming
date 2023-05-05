#include "main.h"

/**
 * get_endianness - there is a check if its little
 * Return:0 big, 1 small
 */

int get_endianness(void)
{
	unsigned int love_is_coding = 1;
	char *car = (char *) &love_is_coding;

	return (*car);
}
