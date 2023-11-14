#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * separated by a , followed by a space.
 *
 * Return: (0)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
