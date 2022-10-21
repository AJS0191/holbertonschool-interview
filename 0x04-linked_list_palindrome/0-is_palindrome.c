#include "lists.h"
#include <stdio.h>



int is_palindrome(listint_t **head)
{
listint_t *trav;
int *arr;
int i = 0;
int j;
int len = 0;

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
        free(arr);
        return 0;
    }
    
};
free(arr);
return 1;
}
