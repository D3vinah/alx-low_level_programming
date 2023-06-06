#include "lists.h"
/**
* reverse_listint - This function reverses a linked list
* @head: This function takes as input the first node in the linked list.
*
* Return: This function returns a pointer to the first node in the new list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
