#include "main.h"
/**
 * swap_int - swap the integers
 * @a: swap integer
 * @b: second swap integer
 * Return:0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
