#include "main.h"
/**
 * factorial- finds factoral of numbers
 * @n:number to find factoral
 * Return:factoral
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
