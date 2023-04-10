#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Number to set
 * @index: Index at which to set bit
 *
 * Return: 1 if success, or -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
