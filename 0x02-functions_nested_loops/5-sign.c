#include "main.h"
/**
 * print_sign- prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater, -1 and - if less than 00
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('_');
	}
	return (-1);
}