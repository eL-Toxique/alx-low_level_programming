#include "main.h"
/**
 * print_array - print n elements of an  array of integer
 * @a:array name
 * @n:number of elements
 * Return:elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d,", a[x]);
	}
	if (x == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
