#include "main.h"
/**
 * print_most_numbers - prints from 0-9
 * does not print 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			n++;
		_putchar(n + '0');
	}
	_putchar('\n');
}
