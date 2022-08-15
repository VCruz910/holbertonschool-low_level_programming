#ifndef _HASH_
#define _HASH_

/*--Libraries--*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*--Data_Structure--*/

/*_Hash_Node_*/
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/*_Hash_Table_*/
/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

/*--Prototypes--*/
/*-_Mandatory Tasks_-*/
/*__0-hash_table_create.c__*/
hash_table_t *hash_table_create(unsigned long int size);

/*__1-djb2.c__*/
unsigned long int hash_djb2(const unsigned char *str);

/*__2-key_index.c__*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/*__3-hash_table_set.c__*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/*__4-hash_table_get.c__*/
char *hash_table_get(const hash_table_t *ht, const char *key);

/*__5-hash_table_print.c__*/
void hash_table_print(const hash_table_t *ht);

/*__6-hash_table_delete.c__*/
void hash_table_delete(hash_table_t *ht);

/*-_Advanced_Tasks_-*/


#endif
