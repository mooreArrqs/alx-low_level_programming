#include <stdio.h>

/**
 * main - print alphabet in lowercase.
 * Return: Always (0)
 */

int main(void)

{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
