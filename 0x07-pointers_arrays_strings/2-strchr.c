#include "main.h"

/**
 * _strchr - lacates a character to a string.
 * @s: the string to be searched.
 * @c: the character to be located.
 *
 * Return: if the c is found, a pointer to the firsr occurence.
 * If c is not found - Null.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
