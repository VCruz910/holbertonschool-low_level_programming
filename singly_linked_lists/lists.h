#ifndef _LISTS_H_
#define _LISTS_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Struct*/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 **/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/*Prototypes (misc.)*/
int _putchar(char c);

/*Prototypes (Mandatory Tasks)*/
/*Prototype for 0-print_list.c*/
size_t print_list(const list_t *h);

/*Prototype for 1-list_len.c*/
size_t list_len(const list_t *h);

/*Prototype for 2-add_node.c*/
list_t *add_node(list_t **head, const char *str);

/*Prototype for 3-add_node_end.c*/
list_t *add_node_end(list_t **head, const char *str);

/*Prototype for 4-free_list.c*/
void free_list(list_t *head);


/*Prototypes (Advanced Tasks)*/

#endif
