#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combination of three digits.
 * Return: Always (0)
 */

int main(void)
{
		int digit_one, digit_two, digit_three;

		digit_one = '0';
		digit_two = '0';
		digit_three = '0';

	while (digit_one <= '9')
	{
		while (digit_two <= '9')
		{
			digit_three = '0';

			while (digit_three <= '9')
			{

				if (digit_one < digit_two && digit_two < digit_three)
				{
					putchar(digit_one);
					putchar(digit_two);
					putchar(digit_three);

					if (digit_one != '7')
					{
						putchar(',');
						putchar(' ');
					}

				}
				digit_three++;
			}
			digit_two++;

		}
		digit_one++;
		digit_two = '0';
		digit_three = '0';
	}
	putchar('\n');
	return (0);
}
