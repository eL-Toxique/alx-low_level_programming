#include "main.h"
/**
 * reverse_array-reverses content of an array
 * @a:content
 * @n:number of elements
 * Return:string
 */
void reverse_array(int *a, int n)
{
	int temp;
	int x = 0;
	int w = n - 1;

	while (x < w)
	{
		temp = a[x];
		a[x] = a[w];
		a[w] = temp;
		x++;
		w--;
	}
}
