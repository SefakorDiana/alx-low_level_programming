#include "lists.h"
/**
 * create_new_node - create new node
 * @n: data
 * Return: pointer
 */

listint_t *create_new_node(int n)

{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
