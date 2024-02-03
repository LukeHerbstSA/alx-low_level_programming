#include "hash_tables.h"
#include "1-djb2.c"
int main(void)
{
	unsigned long int hash1;
	unsigned long int hash2;
	char key1[] = "Australia";
	char key2[] = "Canada";

	hash1 = hash_djb2(key1);
	hash2 = hash_djb2(key2);

	printf("hash1: %lu\nhash2: %lu\n" , hash1, hash2);
	if (hash1 == hash2)
		printf("Collsion: %s and %s", key1, key2);
	return (0);
}
