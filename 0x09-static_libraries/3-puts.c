#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: pointer to the string
 * Return: The string, followed by a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
