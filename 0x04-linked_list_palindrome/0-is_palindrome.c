#include "list.h"

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
//make a linked list
listint_t *pali;
listint_t *trav;
listint_t *list = head;

print_listint(head);
pali = NULL;
//adding every value in current into the new list backwards
trav = head;
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
return 1;
}