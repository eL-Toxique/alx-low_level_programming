#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s:string
 * Return:0
 */
void print_rev(char *s)
{
	int r = 0;
	int o;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	s--;
	for (o = r; o > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
