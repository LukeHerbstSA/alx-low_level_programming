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
	int print_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = (ht->array)[i];
		if (tmp != NULL && print_flag == 1)
		if (tmp != NULL && i > 0)
			printf(", ");
		while (tmp != NULL)
		{
			print_flag = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			if (tmp == NULL && i == ht->size - 1)
				break;
			if (tmp != NULL && tmp->next != NULL)
			if (tmp->next != NULL)
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
