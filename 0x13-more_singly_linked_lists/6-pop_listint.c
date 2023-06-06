#include "lists.h"
/**
* pop_listint - deletes  head node of  linked list
* @head:  first element in the linked list pointer
*
* Return:  data inside the elements which was deleted,
* or 0 if  empty
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
