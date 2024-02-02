#include "hash_tables.h"

/**
	* key_index - int func
	* Description: returns index
	* @key: key to be used
	* @size: number of elements in array
	* Return: index of key
	*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashval;
	int index;

	hashval = hash_djb2(key);
	index = hashval % size;
	return (index);
}
