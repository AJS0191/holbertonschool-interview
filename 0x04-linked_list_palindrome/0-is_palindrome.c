#include "lists.h"
#include <stdio.h>

size_t print_listint1(listint_t *h)
{
    const listint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}
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

pali = NULL;
trav = *head;
while (trav != NULL)
{
    pali = add_node(&pali, trav->n);
    trav = trav->next;
}

printf("This is the new list:");
while (trav != NULL)
{
    printf("%i", pali->n);
    if (trav->n != pali->n)
    {
        return 0;
    }
    else 
    {
        trav = trav->next;
        pali = pali->next;
    }
};

return 1;
}
