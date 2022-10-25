#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints a singly linked list
 * @h: pointer to head of singly linked list
 *    *
 * Return: Number of elements in list
 */
size_t print_listint(const listint_t *h)
{
listint_t *head;
listint_t *new;
listint_t hello = {8, NULL};
size_t n;

head = &hello;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Error\n");
return (1);
}
new->n = 9;
new->next = head;
head = new;
n = print_listint(head);
printf("-> %lu elements\n", n);
free(new);
return (0);
}
