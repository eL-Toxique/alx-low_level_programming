#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(1);
		}
		_putchar('\n');
		i++;
	}
}
