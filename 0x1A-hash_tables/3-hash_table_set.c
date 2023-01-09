#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value of key
 *
 * Return: 1 on SUCCESS, 0 on FAILURE
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key != NULL)
	{
		hash_node_t *element;
		unsigned long int index;	

		/* Create element */
		element = malloc(sizeof(hash_node_t));
		if (element == NULL)
			return (0);
		element->key = malloc(strlen(key) + 1);
		if (element->key == NULL)
			return (0);
		element->value = malloc(strlen(value) + 1);
		if (element->value == NULL)
			return (0);

		strcpy(element->key, key);
		strcpy(element->value, value);

		index = key_index((unsigned char *)key, ht->size); /* Compute index */
		if (ht->array[index] == NULL)	  /* Key does not exist */
		{
			ht->array[index] = element; /* Insert the element */
			return (1);
		}
		else if (ht->array[index] != NULL) /* Key:value pair already exists */
		{
			if (strcmp(ht->array[index]->key, key) == 0) /* Key already exists */
			{
				strcpy(ht->array[index]->value, value); /* Update value */
				return (1);
			}
		}
	}

	return (0);
}
