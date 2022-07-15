#include "lists.h"
/**
 * add_node - Adds a node to the beginning of the list.
 * @head: Head of the linked list.
 * @str: String Variable.
 * Return: A new node at the beginning of the list (N_Node).
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *N_Node = malloc(sizeof(list_t));
	size_t N_Char = 0;

	if (N_Node == NULL)
	{
		return (NULL);
	}
	N_Node->str = strdup(str);
	for (; str[N_Char]; N_Char++)
	{
		;
	}
	N_Node->len = N_Char;
	N_Node->next = *head;
	*head = N_Node;
	return (N_Node);
}
