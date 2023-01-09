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

	table = malloc(sizeof(hash_table_t *) * size);
	if (table == NULL)
		return (NULL);

	return (table);
}
