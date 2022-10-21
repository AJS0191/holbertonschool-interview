#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a node to a linked list
 *
 * @head: linked list being added too
 * @str: string being inserted in node
 *
 * Return: returns the address of the updated list
 **/

listint_t *add_node(listint_t **head, int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		return (NULL);
	}
	newn->next = *head;
	newn->n = n;
	*head = newn;

	return (*head);
}


int is_palindrome(listint_t **head)
{
listint_t *pali;
listint_t *trav;
const listint_t *pali1;
const listint_t *head1;

pali = NULL;
trav = *head;
while (trav != NULL)
{
    pali = add_node(&pali, trav->n);
    trav = trav->next;
}

while (trav != NULL)
{
    if (trav->n != pali->n)
    {
        return 0;
    }
    else 
    {
        trav = trav->next;
        pali = pali->next;
    }
}
pali1 = pali;
head1 = head;
printf("This is the new list:");
print_listint(pali1);
printf("This is the old list:");
print_listint(head1);
return 1;
}
