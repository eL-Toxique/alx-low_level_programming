#include "main.h"
#include <stdlib.h>
/**
 * create_array-creates an array of characters
 * @size:array size
 * @c:assigning character
 *
 * Return:pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)

		return (NULL);
	for (x = 0; x < size; x++)
		arr[x] = c;
	return (arr);

}
