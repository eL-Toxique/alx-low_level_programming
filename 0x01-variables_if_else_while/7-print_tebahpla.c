#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse order
 * Return: 0
 */
int main(void)
{
	char lr;

	for (lr = 'z'; lr >= 'a'; lr++)
		putchar (lr);
	putchar ('\n');
	return (0);
}
