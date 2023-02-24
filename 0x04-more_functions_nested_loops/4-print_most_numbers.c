#include "main.h"
/**
 * print_most_numbers - prints from 0-9
 * does not print 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue;
		}
		putchar(x);
	}
	putchar(10);
}
