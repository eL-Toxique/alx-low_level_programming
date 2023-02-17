#include <stdio.h>
/**
 * main-printing lower and upper case alphabets
 * Return: 0
 */
int main(void)
{
	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
	{
		putchar(lu);
	}
	for (lu = 'A'; lu <= 'Z'; lu++)
	{
		putchar(lu);
	}
	putchar('\n');
	return (0);
}
