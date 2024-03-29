#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
      dlistint_t *new;
      dlistint_t *h;

      new = malloc (sizeof(dlistint_t));
      if  (new == NULL)
	       return (NULL);

      new-> = n;
      new->prev = NULL;
      h = *hesd;


      if  (h != NULL)
      {
	      while (h->prev != NULL)
		      h = h->prev;
      }

      new->next = h;      
