#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 <= 56; digit1++)
	{
		for (digit2 = 49; digit2 < 57; digit2++)
		{
			if (digit2 > digit1)
			{
				putchar(digit1);
				putchar(digit2);

				if (digit1 != 56 || digit2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
