#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n:number of characters drawn
 * Return: 0
 */
void print_diagonal(int n)
{
	int l, g;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			for (g = 0; g <= l; g++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (l == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
