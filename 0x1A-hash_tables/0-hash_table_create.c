#include "hash_tables.h"

/**
	* hash_table_create - hash table func
	* Description: create a hash table
	* @size: range at which arrays will be index
	* Return: hash table or NULL
	*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash = NULL;
	unsigned long int i = 0;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);
	newhash->size = size;
	newhash->array = malloc((sizeof(hash_node_t *) * size);
	if (newhash->array == NULL)
	{
		free(newhash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(newhash->array)[i] = NULL;
	(newhash->array)[i] = NULL;
	newhash->size = size;
	return (newhash);
}
