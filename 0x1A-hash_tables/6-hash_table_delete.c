#include "hash_tables.h"

/**
	* hash_table_delete - void func
	* Description: deletes hash table
	* @ht: hash table
	*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	hash_node_t *prev = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		tmp = (ht->array)[i];
		while (tmp != NULL)
		{
			free(tmp->value);
			free(tmp->key);
			prev = tmp;
			tmp = tmp->next;
			free(prev);
		}
		(ht->array[i]) = NULL;
		i++;
	}
	if (ht->array != NULL)
		free(ht->array);
	free(ht);
}
