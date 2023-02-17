#include <stdio.h>
/**
 * main- prints lowercase alphabets
 * prints all except q and e
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar (lc);
	}
	putchar ('\n');
	return (0);
}
