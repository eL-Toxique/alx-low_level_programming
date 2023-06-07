#include "main.h"
#include <stdlib.h>

/**
 * str_concat- concatenates 2 strings
 * @s1:string input 1
 * @s2:string input 2
 *
 * Return:string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int x = 0;
	int w = 0;

	if (s1 == NULL)     /*check if input 1  is null*/
		s1 = "";
	if (s2 == NULL)     /*check if input 2 is null*/
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[w] != '\0')
		w++;

	result = malloc(sizeof(char) * (x + w + 1));   /*allocates memory*/

	if (result == NULL)
		return (NULL);

	while (s1[x] != '\0')
	{
		result[x] = s1[x];
		x++;
	}

	while (s2[w] != '\0')
	{
		result[x] = s2[w];
		x++;
		w++;
	}

	result[x] = '\0';

	return (result);
}
