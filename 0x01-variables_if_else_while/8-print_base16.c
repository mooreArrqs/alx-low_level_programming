#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase.
 * Return: Always (0)
 */

int main(void)
{
	int number = '0';
	char alpha = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
