#include"main.h"

/**
 * get_bit - Return the value of a bit at a given index
 * @n: Number to check bits in
 * @index: Index at which to check bit
 *
 * Return: Value of the bit or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	j = n & i;
	if (j == i)
		return (1);
	return (0);
}
