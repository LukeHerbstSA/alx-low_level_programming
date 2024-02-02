#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashval;
	int index;

	hashval = hash_djb2(key);
	index = hashval % size;
	return (index);
}
