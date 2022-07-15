#include "lists.h"
/**
 * add_node_end - Adds node at the end of the list
 * @head: Head of the Single Linked List
 * @str: Variable for string.
 * Return: Head's address (*head).
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	/*Variables*/
	list_t *N_Node, *Temp;
	size_t N_Char = 0;

	N_Node = malloc(sizeof(list_t));
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
	N_Node->next = NULL;
	Temp = *head;
	if (Temp == NULL)
	{
		*head = N_Node;
	}
	else
	{
		while (Temp->next != NULL)
		{
			Temp = Temp->next;
		}
		Temp->next = N_Node;
	}
	return (*head);
}
