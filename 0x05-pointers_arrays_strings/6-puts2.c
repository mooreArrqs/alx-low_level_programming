#include "main.h"

/**
 * puts2 - Prints every other character of
 * a string, starting with the new character
 * @str: The used string reference
 * Return: Always 0.
 */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
