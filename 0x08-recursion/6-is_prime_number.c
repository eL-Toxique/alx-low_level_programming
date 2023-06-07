#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number-returns prime numbers
 * @n:input integer
 *
 * Return:1 if prime, 0 not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime- calculates if the number is prime
 * @n:number to check
 * @i:iterator
 *
 * Return:0 if not prime and 1 if it is
 *
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
