#include "main.h"

/**
 * hash_table_create - create hash table given size
 *
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hst = malloc(sizeof(hash_table_t));
	if (!hst)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(hst);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	hst->size = size;
	hst->array = array;

	return (hst);
}
