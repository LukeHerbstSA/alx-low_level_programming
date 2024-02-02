#include "hash_tables.h"

/**
	* hash_table_set - int func
	* Description: sets value and key in node
	* @ht: hash table
	* @key: string key
	* @value: stored value
	* Return: 0 on fail 1 else
	*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *tmp = ht;
	hash_node_t *nodeptr = NULL;
	hash_node_t *newnode = NULL;
	unsigned long int idcheck = 0;
	unsigned long int hash = 0;
	int index = -1;

	if (key == NULL || strcmp(key, "") == 0 || tmp == NULL)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	newnode->key = malloc(strlen(key) + 1);
	newnode->value = malloc(strlen(value) + 1);
	if (newnode == NULL || newnode->key == NULL || newnode->value == NULL)
		return (0);
	tmp = ht;
	hash = hash_djb2(key);
	index = hash % (ht->size);
	nodeptr = (ht->array)[index];
	newnode->next == NULL;
	strcpy(newnode->value, value);
	strcpy(newnode->key, key);
	if (nodeptr == NULL)
		idcheck = 1;
	while (nodeptr != NULL)
	{
		if (hash == hash_djb2(nodeptr->key))
		{
			idcheck = 1;
			break;
		}
		if (nodeptr->next == NULL)
		{
			nodeptr->next = newnode;
			break;
		}
		nodeptr = nodeptr->next;
	}
	if (idcheck == 1)
	{
		newnode->next = NULL;
		if (nodeptr != NULL)
			newnode->next = (ht->array)[index];
		(ht->array)[index] = newnode;
	}
	return (1);
}
