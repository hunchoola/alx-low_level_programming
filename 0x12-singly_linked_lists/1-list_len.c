#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a link list
 * @h: point to the list_t list
 *
 * Return: number of element in the h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
