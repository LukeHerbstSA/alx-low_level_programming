#include "hash_tables.h"

/**
	* hash_table_get - char ptr func
	* Description: gets value from hash table
	* @ht: hash table
	* @key: string key
	* Return: string value
	*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int hash;
	int index;
	int i = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % (ht->size);
	tmp = (ht->array)[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
