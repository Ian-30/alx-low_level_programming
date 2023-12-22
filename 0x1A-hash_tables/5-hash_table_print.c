#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table to print
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hol;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hol = ht->array[i];
		while (hol != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", hol->key, hol->value);
			flag = 1;
			hol = hol->next;
		}
	}
	printf("}\n");
}
