#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 *
 * Return: Value associated with the element, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hol;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	hol = ht->array[index];
	while (hol != NULL)
	{
		if (strcmp(hol->key, key) == 0)
			return (hol->value);
		hol = hol->next;
	}
	return (NULL);
}
