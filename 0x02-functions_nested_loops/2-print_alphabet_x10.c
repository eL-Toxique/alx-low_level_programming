#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	n = 0;

	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	c++;
	}
}
