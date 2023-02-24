#include "main.h"
/**
 * print_triangle - print triangle
 * @size:size of triangle
 * Return:0
 */
void print_triangle(int size)
{
		int i, j, k;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 1; i <= size; i++)
			{
				for (j = size; j >i; j--)
				{
					_putchar(' ');
				}
				for (k = 1; k <= j; k++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
}
