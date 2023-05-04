#include "main.h"

/**
 * get_endianness - Check the endiannes 
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
