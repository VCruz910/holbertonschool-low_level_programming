#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at index of a list.
 * @head: Header of a list.
 * @index: Index.
 * Return: 1 (Success), -1 (Failure)
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
<<<<<<< HEAD
	unsigned int DNode;
	listint_t *PrevN;
	listint_t *NextN;

=======
	/*Variables*/
	unsigned int DNode;
	listint_t *PrevN;
	listint_t *NextN;
	
	/*Main Code*/
>>>>>>> 0cff205ba5b734dc9dc0d2b394997d834a86614e
	PrevN = *head;
	if (index != 0)
	{
		for (DNode = 0; DNode < index - 1 && PrevN != NULL; DNode++)
		{
			PrevN = PrevN->next;
		}
	}
	if (PrevN == NULL || (PrevN->next == NULL && index != 0))
	{
		return (-1);
	}
	NextN = PrevN->next;
	if (index != 0)
	{
		PrevN->next = NextN->next;
		free(NextN);
	}
	else
	{
		free(PrevN);
		*head = NextN;
	}
	return (1);
}
