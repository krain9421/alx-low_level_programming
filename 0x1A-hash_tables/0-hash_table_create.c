#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *my_hash = malloc(sizeof(hash_table_t));

	if (my_hash == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	my_hash->size = size;
	my_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (my_hash->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; i < size; i++)
		my_hash->array[i] = NULL;

	return (my_hash);
}
