#include "hash_tables.h"
#include "0-hash_table_create.c"
#include "3-hash_table_set.c"
#include "5-hash_table_print.c"
#include "1-djb2.c"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
