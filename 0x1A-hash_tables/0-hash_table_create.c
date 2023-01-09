#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to newly created hash table on SUCCESS
 * NULL on FAILURE
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int index;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		table->array[index] = NULL;
		index++;
	}

	return (table);
}
