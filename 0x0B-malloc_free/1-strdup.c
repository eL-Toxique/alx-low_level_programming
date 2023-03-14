#include "main.h"
#include <stdlib.h>
/**
 * _strdup- returns a pointer to a new allocation
 * @str:character
 * Return:0
 */
char *_strdup(char *str)
{
	char *cpy;
	int x = 0;
	int i = 0;

	if (str == NULL)  /*check if input is null*/
		return (NULL);

	while (str[x] != '\0')
		x++;

	cpy = malloc(sizeof(char) * x + 1);  /*allocates memory for copy of string*/

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cpy[i] = str[i];
	return (cpy);


}
