#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: the size of an array.
 * @c: the char to assign.
 * Description: creates an array of chars, and initializes
 * it with a specific char.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */


char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;


	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		str[i] = c;


	return (str);
}

