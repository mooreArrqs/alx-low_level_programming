#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the pointer to the first node.
 * @str: the string to be duplicated.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	}
	return (*head);
}

/**
 * len - the length of a string.
 * @str: the string to be measured.
 * Return: the string's length.
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
