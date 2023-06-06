#include "lists.h"
/**
* get_nodeint_at_index - This function returns the node at a
*certain index in a linked list
* @head: This function adds a new node at the beginning of a
*linked list with head as the first node in the list
* @index:This function returns the index of the node to return
*
* Return:This function returns a pointer to the
* node we’re looking for or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
