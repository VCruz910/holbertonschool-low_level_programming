#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Head of the list
 **/
void free_list(list_t *head)
{
	/*Variables*/
	list_t *CurrSLL; /*Current single linked list*/

	while ((CurrSLL = head) != NULL)
	{
		head = head->next;
		free(CurrSLL->str);
		free(CurrSLL);
	}
}
