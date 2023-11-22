#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combination of two digits
 * separated by a comma and a space.
 *
 * Return: Always (0)
 */

int main(void)
{
	int digit_one, digit_two;

	digit_one = '0';
	digit_two = '0';

	while (digit_one <= '9')
	{
		while (digit_two <= '9')
		{
			if (digit_one < digit_two)
			{
				putchar(digit_one);
				putchar(digit_two);
				if (digit_one != '8' || (digit_one == '8' && digit_two != '9'))
				{
					putchar(',');
					putchar(' ');
			}

		}
		digit_two++;
	}
	digit_one++;
	digit_two = '0';
	}
	putchar('\n');
	return (0);
}
