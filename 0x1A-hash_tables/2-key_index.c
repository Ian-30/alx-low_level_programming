#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: Index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
