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
listint_t *trav;
int *arr;
int i = 0;
int j;
int len;

trav = *head;
while (trav != NULL)
{
    trav = trav->next;
    len++;
}

arr = malloc(sizeof(int)* len);
if (!arr)
{
    return 0;
}

for (i = 0; i < len; i++)
{
    arr[i] = trav->n;
}

for (i = 0, j = len - 1; i < len / 2; i++, j--)
{
    if (arr[i] != arr[j])
    {
        return 0;
    }
    
};

return 1;
}
