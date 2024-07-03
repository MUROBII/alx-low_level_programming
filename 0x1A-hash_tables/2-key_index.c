#include "hash_tables.h"

/**
 * key_index - gives a key index, utilizing the hash value
 * generated by the 'hash_djb2' function.
 *
 * @key: The key (string) to be used in generating the hash value
 * @size: The size of the Table.
 *
 * Return: The index of they key on the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
