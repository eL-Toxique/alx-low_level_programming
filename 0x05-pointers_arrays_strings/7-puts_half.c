#include "main.h"
/**
 * puts_half - print half of a string
 * if odd n=(length_of_the_string - 1)/2
 * @str:input
 * Return:half of the input
 */
void puts_half(char *str)
{
	int u, l, r;

	r = 0;

	for (u = 0; str[u] != '\0'; u++)
		r++;
	l = (r / 2);
	if ((r % 2) == 1)
		l = ((r + 1) / 2);
	for (u = l; str[u] != '\0'; u++)
		_putchar(str[u]);

	_putchar('\n');
}
