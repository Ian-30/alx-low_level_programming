#include "main.h"

/**
 * get_endianness - Check the endianness
 *
 * Return: 0 if big endian or 1 if little
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
