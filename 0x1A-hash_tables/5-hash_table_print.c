#include "hash_tables.h"

/**
	* hash_table_print - void
	* Description: prints hash tab;e
	* @ht: hash table
	*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = (ht->array)[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			if (tmp == NULL && i == ht->size - 1)
				break;
			printf(", ");
		}
		i++;
	}
	printf("}\n");
}
