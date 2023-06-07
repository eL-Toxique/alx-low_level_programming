#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of number
 * @n:number to find
 *
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 *actual_sqrt_recursion-called to find natural square root
 * @n:number to calculate sqrt
 * @i:iterator
 * Return:sqrt
 *
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
