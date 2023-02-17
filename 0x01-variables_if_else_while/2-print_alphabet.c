#include <stdio.h>
/**
 * main-printing lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char lo;

	for (lo = 'a'; lo = 'z'; lo++)
	{
		putchar(lo);
	}
	putchar('\n');
	return (0);
}
