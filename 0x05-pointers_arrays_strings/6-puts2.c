#include "main.h"
/**
 * puts2 - print one character and skips the next
 * @str: input
 * Return:string
 */
void puts2(char *str)
{
	int r = 0;
	int d = 0;
	int o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		r++;
	}
	d = r - 1;

	for (o = 0; o <= d; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
