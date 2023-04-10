#include "main.h"

/**
 * flip_bits - Number of different bits between two numbers
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits you would need ti flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j, k;
	unsigned int count, i;

	count = 0;
	k = 1;
	j = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (k == (j & k))
			count++;
		k <<= 1;
	}
	return (count);
}
